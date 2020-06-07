#ifndef ART_DEV_KBD_H
#define ART_DEV_KBD_H
#include "../Windows.h"
#include "KeyList.h"
#include <queue>
#include <bitset>

class Kbd
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
        unsigned char code;
    public:
        Event();
        Event(Type type, unsigned char code);
        [[nodiscard]] bool isKeyDown() const;
        [[nodiscard]] bool isKeyLongPress() const;
        [[nodiscard]] bool isKeyUp() const;

        [[nodiscard]] bool isValid() const;
        [[nodiscard]] unsigned char getKeyCode() const;
    };

private:
    static constexpr unsigned int nKeys = 256u;
    std::bitset<nKeys> activeKeys;
    Event keysEvents[nKeys];

private:
    void OnKeyPressed(unsigned char keycode, unsigned int longPress);
    void OnKeyReleased(unsigned char keycode);
    void ClearState();

public:
    Kbd();
    Kbd(const Kbd&) = delete;
    Kbd& operator=(const Kbd&) = delete;
    //Key events related
    [[nodiscard]] bool getKey(unsigned char keycode) const noexcept;
    [[nodiscard]] bool getKeyDown(unsigned char keycode);
    [[nodiscard]] bool getKeyPressed(unsigned char keycode) const;
    [[nodiscard]] bool getKeyUp(unsigned char keycode);
    static Kbd *inputController;
    static Kbd* getInstance();
};


#endif
