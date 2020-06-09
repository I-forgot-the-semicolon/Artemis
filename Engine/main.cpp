#include "Engine/App/GameLoop.h"

#include <iostream>
#include <fcntl.h>
#include <io.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int cmdShow)
{
    try
    {
        return GameLoop{}.gameLoop();
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
    return -1;
}




