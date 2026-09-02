#ifndef DIRECTION_H
#define DIRECTION_H

#include <iostream>

class Direction
{
  public:
    enum Type
    {
        up,
        down,
        left,
        right,
        maxDirections
    };

    Direction() = delete;
    Direction(Type type);
    ~Direction() = default;

    Type getType() const;

    static Direction randomDirection();

  private:
    Type m_type {};
};

Direction operator-(Direction direction);
std::ostream& operator<<(std::ostream& out, const Direction& direction);

#endif
