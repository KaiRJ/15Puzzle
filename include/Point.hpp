#ifndef POINT_H
#define POINT_H

#include "Direction.hpp"

struct Point
{
    int x {};
    int y {};

    Point getAdjacentPoint(Direction direction);

    friend bool operator==(const Point& lhs, const Point& rhs);
    friend bool operator!=(const Point& lhs, const Point& rhs);
};

#endif
