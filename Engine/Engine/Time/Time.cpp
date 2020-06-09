#include "Time.h"

Time::Time()
{
    deltaTime = 0;
    newTime = std::chrono::steady_clock::now();
    startTime = std::chrono::steady_clock::now();
}

float Time::getDeltaTime() const
{
    return deltaTime;
}

float Time::getTimeSinceStart()
{
    auto timeSinceStart = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::steady_clock::now() - startTime);
    return timeSinceStart.count();
}

void Time::Tick()
{
    lastTime = newTime;
    newTime = std::chrono::steady_clock::now();
    std::chrono::duration<float> frameTime = newTime-lastTime;
    //deltaTime = frameTime.count() != 0 ? frameTime.count()/1000 : 0;
    deltaTime = frameTime.count();
}
