#include <iostream>
#include "Mouse.h"

Mouse::Event::Event()
{
    type = Type::Invalid;
    code = 0u;
}

Mouse::Event::Event(Mouse::Event::Type type, unsigned int code)
{
    this->type = type;
    this->code = code;
}

bool Mouse::Event::isKeyDown() const
{
    return type==Type::KeyDown;
}

bool Mouse::Event::isKeyLongPress() const
{
    return type==Type::KeyHold;
}

bool Mouse::Event::isKeyUp() const
{
    return type==Type::KeyUp;
}

Mouse* Mouse::instance = nullptr;

Mouse *Mouse::getInstance()
{
    if(instance == nullptr)
        instance = new Mouse();

    return instance;
}

bool Mouse::getButtonDown(unsigned int code)
{
    if(keysEvents[code].isKeyDown())
    {
        keysEvents[code] = Mouse::Event();
        return true;
    }
    return false;
}

bool Mouse::getButtonPressed(unsigned int code)
{
    return activeKeys[code];
}

bool Mouse::getButtonUp(unsigned int code)
{
    if(keysEvents[code].isKeyUp())
    {
        keysEvents[code] = Mouse::Event();
        return true;
    }
    return false;
}

void Mouse::onButtonPress(unsigned int code, LPARAM coordinates)
{
    activeKeys[code] = true;
    keysEvents[code] = Mouse::Event(Mouse::Event::Type::KeyDown, code);
    this->x = coordinates & 0xFFFF;
    this->y = (coordinates >> 16);
    std::cout << "Type: " << code  << " x: " << x << " y: " << y << std::endl;
}

void Mouse::onButtonRelease(unsigned int code, LPARAM coordinates)
{
    activeKeys[code] = false;
    keysEvents[code] = Mouse::Event(Mouse::Event::Type::KeyUp, code);
    this->x = coordinates & 0xFFFF;
    this->y = (coordinates >> 16);
}

unsigned int Mouse::getMouseX() const
{
    return x;
}



