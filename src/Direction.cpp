#include "Direction.hpp"
#include "Random.hpp"
#include <cassert>

Direction::Direction(Type type) : m_type(type) {}

Direction::Type Direction::getType() const { return m_type; }

Direction Direction::randomDirection()
{
    Type random {static_cast<Type>(Random::get(0, Direction::maxDirections - 1))};
    return {random};
}

Direction operator-(Direction direction)
{
    switch (direction.getType())
    {
    case Direction::up:
        return {Direction::down};
    case Direction::down:
        return {Direction::up};
    case Direction::left:
        return {Direction::right};
    case Direction::right:
        return {Direction::left};
    default:
        assert(0 && "Unsupported direction was passed !");
    }
}

std::ostream& operator<<(std::ostream& out, const Direction& direction)
{
    switch (direction.getType())
    {
    case Direction::up:
        return out << "up";
    case Direction::down:
        return out << "down";
    case Direction::left:
        return out << "left";
    case Direction::right:
        return out << "right";
    default:
        assert(0 && "Unsupported direction was passed!");
    }
}
