#ifndef ART_DEV_TIME_H
#define ART_DEV_TIME_H
#include <chrono>

class Time
{
private:
    std::chrono::steady_clock::time_point startTime, newTime, lastTime;
    float deltaTime;
public:
    Time();
    void Tick();
    [[nodiscard]] float getDeltaTime() const;
    float getTimeSinceStart();
};


#endif //ART_DEV_TIME_H
