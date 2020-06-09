
#ifndef ART_DEV_GAMELOOP_H
#define ART_DEV_GAMELOOP_H
#include "../Window/Window.h"
#include "../Input/Input.h"
#include "../Time/Time.h"
#include <sstream>

class GameLoop
{
private:
    Window *window;
    Input *input;
    Time time;
private:
    void manageInput();
public:
    GameLoop();
    ~GameLoop();
    int gameLoop();
};


#endif
