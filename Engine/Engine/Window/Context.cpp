#include "Context.h"

Context::Context()
{
    window = nullptr;
    windowWidth = 0;
    windowHeight = 0;
}

Context::Context(HWND window, int windowWidth, int windowHeight)
{
    this->window = window;
    this->windowWidth = windowWidth;
    this->windowHeight = windowHeight;
}

HWND Context::getWindow()
{
    return window;
}

int Context::getWindowWidth() const
{
    return windowWidth;
}

int Context::getWindowHeight() const
{
    return windowHeight;
}

