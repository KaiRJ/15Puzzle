#include "Point.hpp"

#include <cassert>

Point Point::getAdjacentPoint(Direction direction)
{

    switch (direction.getType())
    {
    case Direction::up:
        return {x, y - 1};
    case Direction::down:
        return {x, y + 1};
    case Direction::right:
        return {x + 1, y};
    case Direction::left:
        return {x - 1, y};
    default:
        assert(0 && "Unsupported direction was passed !");
    }
}

bool operator==(const Point& lhs, const Point& rhs)
{
    return (lhs.x == rhs.x) and (lhs.y == rhs.y);
}

bool operator!=(const Point& lhs, const Point& rhs) { return !(lhs == rhs); }
