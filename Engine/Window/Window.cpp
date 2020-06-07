#include "Window.h"

Window::Window(int width, int height, const char *name)
{
    this->width = width;
    this->height = height;
    windowClass = new WindowClass;
    windowClass->wndClass.lpfnWndProc = HandleMsgSetup;
    windowClass->RegisterWindowClass();

    std::cout << "Creating actualWindow" << std::endl;

    RECT windowsRect;
    windowsRect.left = 100;
    windowsRect.right = width + windowsRect.left;
    windowsRect.top = 100;
    windowsRect.bottom = windowsRect.top + height;
    AdjustWindowRect(&windowsRect, WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU, false);


    actualWindow = CreateWindowExA(0, WindowClass::GetName(), name,
                                   WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU, 100, 100,
                                   600, 600,
                                   nullptr, nullptr, windowClass->GetInstance(), this);

    if(actualWindow == nullptr)
        throw WND_LAST_EXCEPTION();

    inputController = Kbd::getInstance();
    mouseController = Mouse::getInstance();
    ShowWindow(actualWindow, SW_SHOWDEFAULT);
}

Window::~Window()
{
    std::cout << "Deleting actualWindow" << std::endl;
    DestroyWindow(actualWindow);
    delete windowClass;
}


LRESULT Window::HandleMsgSetup(HWND actualWindow, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    if(uMsg == WM_CREATE)
    {
        const CREATESTRUCTW *const pCreate = reinterpret_cast<CREATESTRUCTW*>(lParam);
        auto *const pWnd = static_cast<Window*>(pCreate->lpCreateParams);
        SetWindowLongPtr(actualWindow, GWLP_USERDATA, reinterpret_cast<LONG_PTR>(pWnd));
        SetWindowLongPtr(actualWindow, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(&Window::HandleMsgThunk));
        return pWnd->HandleMsg(actualWindow, uMsg, wParam, lParam);
    }
    std::cout << "Config setup" << std::endl;
    return DefWindowProcA(actualWindow, uMsg, wParam, lParam);
}

LRESULT Window::HandleMsgThunk(HWND actualWindow, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    auto pWnd = reinterpret_cast<Window*>(GetWindowLongPtr(actualWindow, GWLP_USERDATA));
    return pWnd->HandleMsg(actualWindow, uMsg, wParam, lParam);
}

LRESULT Window::HandleMsg(HWND window, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg)
    {
        case WM_CLOSE:
            PostQuitMessage(0);
            break;
        case WM_KEYDOWN:
            std::cout << "Pressed: " << wParam << std::endl;
            inputController->OnKeyPressed(static_cast<unsigned char>(wParam), (lParam >> 30));
            break;
        case WM_KEYUP:
            inputController->OnKeyReleased(static_cast<unsigned char>(wParam));
            break;
        case WM_LBUTTONDOWN:
            mouseController->onButtonPress(Key_Left_Button, lParam);
            break;
        case WM_LBUTTONUP:
            mouseController->onButtonRelease(Key_Left_Button, lParam);
            break;
        case WM_RBUTTONDOWN:
            mouseController->onButtonPress(Key_Right_Button, lParam);
            break;
        default:
            break;
    }
    return DefWindowProcA(window, uMsg, wParam, lParam);
}


Window::Exception::Exception(int line, const char *file, HRESULT hResult) : ErrorHandler(line, file)
{
    this->hResult = hResult;
}

const char *Window::Exception::what() const noexcept
{
    std::ostringstream oss;

    if(!customException.empty())
    {
        oss << getType() << std::endl
            << "[Error] -> " << customException << std::endl
            << getOriginalString();
    }
    else
    {
        oss << getType() << std::endl
            << "[Error code] -> " << getErrorCode() << std::endl
            << "[Description] -> " << getErrorString() << std::endl
            << getOriginalString();
    }
    errBuffer = oss.str();
    return errBuffer.c_str();
}

const char *Window::Exception::getType() const noexcept
{
    return ErrorHandler::getType();
}

HRESULT Window::Exception::getErrorCode() const noexcept
{
    return hResult;
}

std::string Window::Exception::getErrorString() const noexcept
{
    return translateErrorCode(hResult);
}

std::string Window::Exception::translateErrorCode(HRESULT hResult)
{
    char *pMsgBuf = nullptr;
    DWORD nMsgLen = FormatMessageA(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
                                   nullptr, hResult, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), reinterpret_cast<LPSTR>(&pMsgBuf),0 ,
                                   nullptr);
    if(nMsgLen == 0)
        return "Undefined error";

    std::string error = pMsgBuf;
    LocalFree(pMsgBuf);
    return error;
}

Window::Exception::Exception(int line, const char *file, const char *customException) : ErrorHandler(line, file, customException)
{
    this->hResult = 0;
}
