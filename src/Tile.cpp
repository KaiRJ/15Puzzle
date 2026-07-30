#include "Tile.hpp"

#include <iostream>

Tile::Tile(int number) : m_number {number} {}

int Tile::getNumber() const { return m_number; }

bool Tile::isEmpty() const { return m_number == 0; }

std::ostream& operator<<(std::ostream& out, const Tile& tile)
{
    if (tile.getNumber() > 9) // if two digit number
        out << " " << tile.getNumber() << " ";
    else if (tile.getNumber() > 0) // if one digit number
        out << "  " << tile.getNumber() << " ";
    else if (tile.getNumber() == 0) // if empty spot
        out << "    ";
    return out;
}
