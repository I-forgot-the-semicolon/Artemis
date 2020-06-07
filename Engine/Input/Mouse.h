#ifndef ART_DEV_MOUSE_H
#define ART_DEV_MOUSE_H

#include "../Windows.h"
#include <bitset>


class Mouse
{
    friend class Window;
private:
    class Event
    {
    public:
        enum class Type
        {
            KeyDown,
            KeyHold,
            KeyUp,
            Invalid
        };
    private:
        Type type;
        unsigned int code;
    public:
        Event();
        Event(Type type, unsigned int code);
        [[nodiscard]] bool isKeyDown() const;
        [[nodiscard]] bool isKeyLongPress() const;
        [[nodiscard]] bool isKeyUp() const;
    };

private:
    int x = 0, y = 0;
    static constexpr unsigned int nKeys = 3u;
    std::bitset<nKeys> activeKeys;
    Event keysEvents[nKeys];

private:
    void onButtonPress(unsigned int code, LPARAM coordinates);
    void onButtonRelease(unsigned int code, LPARAM coordinates);


public:
    Mouse() = default;
    Mouse(const Mouse&) = delete;
    Mouse& operator=(const Mouse&) = delete;

    bool getButtonDown(unsigned int code);
    bool getButtonPressed(unsigned int code);
    bool getButtonUp(unsigned int code);
    [[nodiscard]] unsigned int getMouseX() const;
    static Mouse *instance;
    static Mouse* getInstance();
};


#endif
