#ifndef TILE_HPP
#define TILE_HPP

#include <iostream>

class Tile
{
  public:
    Tile() = default;
    explicit Tile(int number);

    int getNumber() const;
    bool isEmpty() const;

  private:
    int m_number {0};
};

std::ostream& operator<<(std::ostream& out, const Tile& tile);

#endif
