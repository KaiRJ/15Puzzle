#ifndef BOARD_HPP
#define BOARD_HPP

#include "Tile.hpp"

#include <array>
#include <iostream>
#include <mdspan>

class Board
{
  public:
    Board();

    friend std::ostream& operator<<(std::ostream& out, const Board& board);

  private:
    static constexpr int s_size {4};
    std::array<Tile, s_size * s_size> m_board {};
};

#endif
