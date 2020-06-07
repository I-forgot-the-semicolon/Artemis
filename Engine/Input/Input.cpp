#include "Input.h"

Input::Input(int *context)
{
    mouse = Mouse::getInstance();
    keyboard = Kbd::getInstance();
    running = context;
    inputThread = std::thread(&Input::inputLoop, this);
}

bool Input::getKeyDown(unsigned char keycode)
{
    if(keycode < 4)
    {
        return mouse->getButtonDown(keycode);
    }
    else
    {
        return keyboard->getKeyDown(keycode);
    }
}

unsigned int Input::getMouseX() const
{
    return mouse->getMouseX();
}

bool Input::getKeyPressed(unsigned char keycode) const
{
    if(keycode < 4)
    {
        return mouse->getButtonPressed(keycode);
    }
    else
    {
        return keyboard->getKeyPressed(keycode);
    }
}

void Input::inputLoop()
{
    while (*running > 0)
    {
        if(getKeyDown(Key_Left_Button))
        {
            std::cout << "Click!" << std::endl;
        }
        if(getKeyDown(Key_A))
        {
            std::cout << "Key A pressed!" << std::endl;
        }
        if(getKeyDown(Key_W))
        {
            std::cout << "Key W pressed!" << std::endl;
        }
        if(getKeyPressed(Key_W))
        {
            std::cout << "Key W pressed continously!" << std::endl;
        }
    }
}

Input::~Input()
{
    inputThread.join();
}
