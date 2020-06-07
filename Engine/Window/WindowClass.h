//
// Created by warl0 on 04/06/2020.
//

#ifndef ART_DEV_WINDOWCLASS_H
#define ART_DEV_WINDOWCLASS_H
#include "../Windows.h"
#include <iostream>
#include <fcntl.h>
#include <io.h>

class WindowClass
{
private:
    HINSTANCE hInstance;
    static constexpr const char* windowClassName = "Engine Window Class";

public:
    WNDCLASSEX wndClass{0};
//Functions
private:
    void redirectToConsole();

public:
    WindowClass() noexcept;
    ~WindowClass();
    WindowClass(const WindowClass&) = delete;
    WindowClass& operator=(const WindowClass&) = delete;

    void RegisterWindowClass();
    static const char* GetName();
    HINSTANCE GetInstance();
};


#endif //ART_DEV_WINDOWCLASS_H
