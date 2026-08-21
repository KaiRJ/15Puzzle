#include "Board.hpp"

// Increase amount of new lines if your board isn't
// at the very bottom of the console
constexpr int g_consoleLines {25};

Board::Board()
{
    for (int row {0}; row < std::size(m_board); ++row)
    {
        for (int col {0}; col < std::size(m_board[row]); ++col)
        {
            // TODO: set the number of each tile
        }
    }

    // TODO: set last tile to 0
}

std::ostream& operator<<(std::ostream& out, const Board& board)
{
    // TODO: implement
    return out;
}
