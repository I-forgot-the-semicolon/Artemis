#include <iostream>
#include "Input.h"

Input::Input()
{
    context = Context();
    windowWidth = 0;
    windowHeight = 0;
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

void Input::setContext(Context inputContext)
{
    this->actualWindow = inputContext.getWindow();
    this->windowWidth = inputContext.getWindowWidth();
    this->windowHeight = inputContext.getWindowHeight();
}

Context Input::getContext()
{
    return context;
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
    /* We fetch the mouse position and we map it to window position equivalent, then
       we update the mouse position. */
    POINT pos;
    GetCursorPos(&pos);
    ScreenToClient(actualWindow, &pos);
    setMousePos(Vector2(pos.x, pos.y));

    /* Check if the mouse is inside the window and then update the information
       about it. */
    if(pos.x >= 0 && pos.x < windowWidth && pos.y >= 0 & pos.y < windowHeight)
    {
        if(!isInWindow())
        {
            onMouseEnter();
        }
    }
    else
    {
        if(isInWindow())
        {
            onMouseLeave();
        }
    }
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

















