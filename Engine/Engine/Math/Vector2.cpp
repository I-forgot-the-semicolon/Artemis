#include "Vector2.h"

Vector2::Vector2()
{
    this->x = 0.0;
    this->y = 0.0;
}

Vector2::Vector2(double x, double y)
{
    this->x = x;
    this->y = y;
}

Vector2::Vector2(int x, int y)
{
    this->x = (double)x;
    this->y = (double)y;
}

double Vector2::distance() const
{
    return sqrt(pow(this->x, 2) + pow(this->y, 2));
}

Vector2 &Vector2::operator=(const Vector2 &other)
{
    this->x = other.x;
    this->y = other.y;
    return *this;
}

