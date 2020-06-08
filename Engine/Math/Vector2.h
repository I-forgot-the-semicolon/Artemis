#ifndef ART_DEV_VECTOR2_H
#define ART_DEV_VECTOR2_H
#include <cmath>

class Vector2
{
public:
    double x;
    double y;

public:
    Vector2();
    Vector2(double x, double y);
    Vector2(int x, int y);
    Vector2& operator=(const Vector2& other);
    [[nodiscard]] double distance() const;
};


#endif
