#ifndef ART_DEV_INPUT_H
#define ART_DEV_INPUT_H
#include "../Windows.h"
#include "../Window/Context.h"
#include "../Math/Vector2.h"
#include "KeyList.h"
#include <queue>
#include <bitset>

class Input
{
    friend class Window;
private:
    static constexpr unsigned int nKeys = 256u;
    std::bitset<nKeys> lastFrameKeysEvents;
    std::bitset<nKeys> actualFrameKeysEvents;
    //Mouse section
    Vector2 mousePos;
    bool inWindow;
    Context context;
    HWND actualWindow;
    int windowWidth, windowHeight;

private:
    void pollKey(unsigned char keycode);
    void pollMouse();
    void setMousePos(Vector2 pos);
    void ClearState();

public:
    Input();
    Input(const Input&) = delete;
    Input& operator=(const Input&) = delete;

    /* Window Specific*/
    void setContext(Context inputContext);
    Context getContext();

    /* Poll Input specific */
    void PollInput();

    /* Key events specific */
    int getKey(unsigned char keycode);
    bool getKeyDown(unsigned char keycode);
    bool getKeyPressed(unsigned char keycode);
    bool getKeyUp(unsigned char keycode);

    /* Mouse specific */
    void onMouseEnter();
    void onMouseLeave();
    [[nodiscard]] bool isInWindow() const;
    Vector2 getMousePos();
    [[nodiscard]] int getMouseX() const;
    [[nodiscard]] int getMouseY() const;

    /* Instance */
    static Input *inputController;
    static Input* getInstance();
};


#endif
