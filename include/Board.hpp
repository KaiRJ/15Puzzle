#ifndef BOARD_HPP
#define BOARD_HPP

#include "Direction.hpp"
#include "Point.hpp"
#include "Tile.hpp"

#include <array>
#include <iostream>

class Board
{
  public:
    Board();
    ~Board() = default;

    bool moveTile(Direction direction);

    friend std::ostream& operator<<(std::ostream& out, const Board& board);

  private:
    Point getEmptyTilePoint();
    bool isValidPoint(Point pt);
    void switchTiles(Point pt1, Point pt2);

    static constexpr int s_size {4};
    std::array<Tile, s_size * s_size> m_board {};
};

#endif
