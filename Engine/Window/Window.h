#ifndef ART_DEV_WINDOW_H
#define ART_DEV_WINDOW_H

#include "../Windows.h"
#include "WindowClass.h"
#include "../ErrorHandlers/ErrorHandler.h"
#include "../Input/Input.h"
#include "../Math/Vector2.h"

#include <iostream>
#include <optional>

class Window
{
private:
    int screenX, screenY;
    int width, height;
    int posInScreenX, posInScreenY;
    HMONITOR hmonitor;
    HWND actualWindow;
    MONITORINFOEX info{};
    Context context;
    WindowClass *windowClass;
    Input *inputController;

private:
    void getScreenResolution();

    /* Handlers */
    static LRESULT WINAPI HandleMsgSetup(HWND window, UINT uMsg, WPARAM wParam, LPARAM lParam);
    static LRESULT WINAPI HandleMsgThunk(HWND window, UINT uMsg, WPARAM wParam, LPARAM lParam);
    LRESULT HandleMsg(HWND window, UINT uMsg, WPARAM wParam, LPARAM lParam);

public:
    Window(int width, int height, const char *name);
    ~Window();
    Window(const Window&) = delete;
    Window& operator=(const Window&) = delete;
    static std::optional<int> processMessage();
    void setWindowTitle(const char *title);

public:
    class Exception : public ErrorHandler
    {
    private:
        HRESULT hResult;
    public:
        Exception(int line, const char* file, HRESULT hResult);
        Exception(int line, const char* file, const char *customException);
        const char *what() const noexcept override;
        const char *getType() const noexcept override;
        static std::string translateErrorCode(HRESULT hResult);
        HRESULT getErrorCode() const noexcept;
        std::string getErrorString() const noexcept;
    };
};



#define WND_EXCEPTION(hResult) Window::Exception(__LINE__, __FILE__, hResult);
#define WND_EXCEPTION(customExcept) Window::Exception(__LINE__, __FILE__, customExcept);
#define WND_LAST_EXCEPTION() Window::Exception(__LINE__, __FILE__, GetLastError());


#endif
