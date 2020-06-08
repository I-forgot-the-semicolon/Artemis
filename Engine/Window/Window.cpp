#include "Window.h"

Window::Window(int width, int height, const char *name)
{
    this->width = width;
    this->height = height;
    this->screenY = 0;
    this->screenX = 0;
    this->hmonitor = {};

    getScreenResolution();

    windowClass = new WindowClass;
    windowClass->wndClass.lpfnWndProc = HandleMsgSetup;
    windowClass->RegisterWindowClass();

    std::cout << "Creating actualWindow" << std::endl;
    std::cout << "Default width: " << screenX << std::endl;
    std::cout << "Default height: " << screenY << std::endl;


    posInScreenX = screenX-width > 0 ? (screenX-width)/2 : 0;
    posInScreenY = screenY-height > 0 ? (screenY-height)/2 : 0;

    actualWindow = CreateWindowExA(0, WindowClass::GetName(), name,
                                   WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU, posInScreenX, posInScreenY,
                                   width, height,
                                   nullptr, nullptr, windowClass->GetInstance(), this);

    if(actualWindow == nullptr)
        throw WND_LAST_EXCEPTION();

    context = Context(actualWindow, width, height);

    inputController = Input::getInstance();
    inputController->setContext(context);
    ShowWindow(actualWindow, SW_SHOWDEFAULT);
}

Window::~Window()
{
    std::cout << "Deleting actualWindow" << std::endl;
    DestroyWindow(actualWindow);
    delete windowClass;
}


void Window::getScreenResolution()
{
    hmonitor = MonitorFromWindow(nullptr, MONITOR_DEFAULTTOPRIMARY);
    info.cbSize = sizeof(MONITORINFOEX);
    int res = GetMonitorInfoA(hmonitor, &info);
    if(res == 0)
    {
        exit(-1);
    }
    this->screenX = info.rcMonitor.right;
    this->screenY = info.rcMonitor.bottom;
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
        default:
            break;
    }
    return DefWindowProcA(window, uMsg, wParam, lParam);
}

std::optional<int> Window::processMessage()
{
    MSG msg;
    while(PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE))
    {
        if(msg.message == WM_QUIT)
        {
            return msg.wParam;
        }

        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }
    return std::nullopt;
}

void Window::setWindowTitle(const char *title)
{
    SetWindowTextA(actualWindow, title);
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

Window::Exception::Exception(int line, const char *file, HRESULT hResult) : ErrorHandler(line, file)
{
    this->hResult = hResult;
}

Window::Exception::Exception(int line, const char *file, const char *customException) : ErrorHandler(line, file, customException)
{
    this->hResult = 0;
}
