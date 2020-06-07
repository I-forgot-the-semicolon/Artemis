#ifndef ART_DEV_INPUT_H
#define ART_DEV_INPUT_H
#include "Kbd.h"
#include "Mouse.h"
#include <iostream>
#include <thread>

class Input
{
private:
    int *running;
    Mouse* mouse;
    Kbd* keyboard;
    std::thread inputThread;

public:
    explicit Input(int *context);
    ~Input();
    Input(const Input&) = delete;
    Input& operator=(const Input&) = delete;

    void inputLoop();

    bool getKeyDown(unsigned char keycode);
    [[nodiscard]] bool getKeyPressed(unsigned char keycode) const;
    [[nodiscard]] unsigned int getMouseX() const;

};


#endif
