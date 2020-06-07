#include <iostream>
#include "Kbd.h"

bool Kbd::getKey(unsigned char keycode) const noexcept
{
    return activeKeys[keycode];
}

void Kbd::OnKeyPressed(unsigned char keycode, unsigned int longPress)
{
    activeKeys[keycode] = true;
    if(longPress == 0)
        keysEvents[keycode] = Kbd::Event(Kbd::Event::Type::KeyDown, keycode);
    else
        keysEvents[keycode] = Kbd::Event(Kbd::Event::Type::KeyHold, keycode);
}

void Kbd::OnKeyReleased(unsigned char keycode)
{
    activeKeys[keycode] = false;
    keysEvents[keycode] = Kbd::Event(Kbd::Event::Type::KeyUp, keycode);
}

void Kbd::ClearState()
{
    activeKeys.reset();
}

bool Kbd::getKeyDown(unsigned char keycode)
{
    if(keysEvents[keycode].isKeyDown())
    {
        keysEvents[keycode] = Kbd::Event();
        return true;
    }
    return false;
}

bool Kbd::getKeyPressed(unsigned char keycode) const
{
    return keysEvents[keycode].isKeyLongPress();
}

bool Kbd::getKeyUp(unsigned char keycode)
{
    if(keysEvents[keycode].isKeyUp())
    {
        keysEvents[keycode] = Kbd::Event();
        return true;
    }
    return false;
}

Kbd* Kbd::inputController = nullptr;

Kbd* Kbd::getInstance()
{
    if(inputController == nullptr)
        inputController = new Kbd();

    return inputController;
}

Kbd::Kbd() = default;

Kbd::Event::Event()
{
    type = Type::Invalid;
    code = 0u;
}

Kbd::Event::Event(Kbd::Event::Type type, unsigned char code)
{
    std::cout << "Type: " << (type == Type::KeyDown) << std::endl;
    this->type = type;
    this->code = code;
}

bool Kbd::Event::isValid() const
{
    return type != Type::Invalid;
}

bool Kbd::Event::isKeyDown() const
{
    return type == Type::KeyDown;
}

bool Kbd::Event::isKeyLongPress() const
{
    return type == Type::KeyHold;
}

bool Kbd::Event::isKeyUp() const
{
    return type == Type::KeyUp;
}

unsigned char Kbd::Event::getKeyCode() const
{
    return code;
}






