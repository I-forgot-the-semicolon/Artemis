#ifndef ART_DEV_CONTEXT_H
#define ART_DEV_CONTEXT_H
#include "../Windows.h"

class Context
{
private:
    HWND window;
    int windowWidth, windowHeight;
public:
    Context();
    Context(HWND window, int windowWidth, int windowHeight);
    HWND getWindow();
    [[nodiscard]] int getWindowWidth() const;
    [[nodiscard]] int getWindowHeight() const;
};


#endif //ART_DEV_CONTEXT_H
