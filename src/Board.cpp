#include "Board.hpp"

#include <print>

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
