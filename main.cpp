#include "Engine/Window/Window.h"
#include "Engine/Input/Input.h"
#include <iostream>
#include <fcntl.h>
#include <io.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int cmdShow)
{
    try
    {
        Window newWindow(600, 600, "Main Window");


        BOOL result;
        MSG msg;

        Input *input = nullptr;
        while((result = GetMessageA(&msg, nullptr, 0, 0)) > 0)
        {
            if(input == nullptr)
                input = new Input(&result);
            TranslateMessage(&msg);
            DispatchMessageA(&msg);
        }

        if(result == -1)
            return -1;
        else
            return msg.lParam;
        delete input;
    }
    catch (const ErrorHandler &e)
    {
        MessageBoxA(nullptr, e.what(), e.getType(), MB_OK|MB_ICONEXCLAMATION);
    }
    catch (std::exception &e)
    {
        MessageBoxA(nullptr, e.what(),"Standard error", MB_OK|MB_ICONEXCLAMATION);
    }
    catch (...)
    {
        MessageBoxA(nullptr, "Undefined error", "Err", MB_OK|MB_ICONEXCLAMATION);
    }
}




