#ifndef BOARD_HPP
#define BOARD_HPP

#include "Tile.hpp"

#include <array>
#include <iostream>

class Board
{
  public:
    Board();

  private:
    std::array<std::array<Tile, 4>, 4> m_board {};
};

std::ostream& operator<<(std::ostream& out, const Board& board);

#endif
