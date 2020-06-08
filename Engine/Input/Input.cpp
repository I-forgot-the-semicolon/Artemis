#include <iostream>
#include "Input.h"

Input::Input()
{
    actualWindow = nullptr;
    inWindow = false;
    mousePos = Vector2();
    for(int i = 0; i < 256; i++)
    {
        lastFrameKeysEvents[i] = false;
        actualFrameKeysEvents[i] = false;
    }
}

int Input::getKey(unsigned char keycode)
{
    return lastFrameKeysEvents[keycode] == 0 && actualFrameKeysEvents[keycode] == 1 || lastFrameKeysEvents[keycode] == 1 && actualFrameKeysEvents[keycode] == 1 ? 1 : 0;
}

bool Input::getKeyDown(unsigned char keycode)
{
    return lastFrameKeysEvents[keycode] == 0 && actualFrameKeysEvents[keycode] == 1;
}

bool Input::getKeyPressed(unsigned char keycode)
{
    return lastFrameKeysEvents[keycode] == 1 && actualFrameKeysEvents[keycode] == 1;
}

bool Input::getKeyUp(unsigned char keycode)
{
    return lastFrameKeysEvents[keycode] == 1 && actualFrameKeysEvents[keycode] == 0;
}

void Input::ClearState()
{
    lastFrameKeysEvents.reset();
    actualFrameKeysEvents.reset();
}

Input* Input::inputController = nullptr;


Input *Input::getInstance()
{
    if(inputController == nullptr)
        inputController = new Input();

    return inputController;
}

void Input::setContext(HWND context)
{
    this->actualWindow = context;
}

HWND Input::getContext()
{
    return actualWindow;
}

void Input::pollKey(unsigned char keycode)
{
    /* Getting the high bit of GetKeyState*/
    unsigned short int mode = ((unsigned short int)GetKeyState(keycode)) >> 15u;

    lastFrameKeysEvents[keycode] = actualFrameKeysEvents[keycode];
    actualFrameKeysEvents[keycode] = mode;
}

void Input::pollMouse()
{
    POINT pos;
    GetCursorPos(&pos);
    ScreenToClient(actualWindow, &pos);
    setMousePos(Vector2(pos.x, pos.y));
}

void Input::PollInput()
{
    for(int i = 0; i < 256; i++)
    {
        pollKey(i);
    }

    pollMouse();
}

void Input::setMousePos(Vector2 pos)
{
    mousePos = pos;
}

bool Input::isInWindow() const
{
    return inWindow;
}

void Input::onMouseEnter()
{
    inWindow = true;
}

void Input::onMouseLeave()
{
    inWindow = false;
}

Vector2 Input::getMousePos()
{
    return mousePos;
}

int Input::getMouseX() const
{
    return (int)mousePos.x;
}

int Input::getMouseY() const
{
    return (int)mousePos.y;
}

















