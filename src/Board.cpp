#include "Board.hpp"

#include <cassert>
#include <print>
#include <utility>

// Increase amount of new lines if your board isn't
// at the very bottom of the console
constexpr int g_consoleLines {25};

Board::Board()
{
    for (size_t i {0}; i < std::size(m_board) - 1; ++i)
    {
        m_board[i] = Tile(i + 1);
    }

    m_board[std::size(m_board) - 1] = Tile(0);
}

bool Board::moveTile(Direction direction)
{
    Point empty_point {getEmptyTilePoint()};
    Point adjacent_point {empty_point.getAdjacentPoint(direction)};

    if (!isValidPoint(adjacent_point))
        return false;

    switchTiles(empty_point, adjacent_point);
    return true;
}

Point Board::getEmptyTilePoint()
{
    for (int x {0}; x < s_size; ++x)
    {
        for (int y {0}; y < s_size; ++y)
        {
            int tile_idx {x + (y * s_size)};
            if (m_board[tile_idx].getNumber() == 0)
            {
                return {x, y};
            }
        }
    }

    assert(0 && "No empty tile found !");
    return {-1, -1};
}

bool Board::isValidPoint(Point pt)
{
    return (pt.x >= 0) && (pt.x < s_size) && (pt.y >= 0) && (pt.y < s_size);
}

void Board::switchTiles(Point pt1, Point pt2)
{
    int tile1 {pt1.x + (pt1.y * s_size)};
    int tile2 {pt2.x + (pt2.y * s_size)};
    std::swap(m_board[tile1], m_board[tile2]);
}

std::ostream& operator<<(std::ostream& out, const Board& board)
{
    for (size_t i {0}; i < g_consoleLines; ++i)
        std::cout << "\n";

    for (size_t col {0}; col < board.s_size; ++col)
    {
        for (size_t row {0}; row < board.s_size; ++row)
        {
            size_t idx {row + (col * board.s_size)};
            out << board.m_board[idx];
        }

        std::println("");
    }

    return out;
}
