#include "UserInput.hpp"
#include "Direction.hpp"

#include <cassert>
#include <iostream>
#include <limits>

namespace UserInput
{
    bool isValidCommand(char c)
    {
        return c == 'w' || c == 's' || c == 'a' || c == 'd' || c == 'q';
    }

    void ignoreLine()
    {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    char getCharacter()
    {
        char c {};
        std::cin >> c;
        ignoreLine();
        return c;
    }

    char getCommand()
    {
        char c {};
        while (!isValidCommand(c))
            c = getCharacter();

        return c;
    }

    Direction getDirection(char c)
    {
        switch (c)
        {
        case 'w':
            return {Direction::up};
        case 's':
            return {Direction::down};
        case 'a':
            return {Direction::left};
        case 'd':
            return {Direction::right};
        default:
            assert(0 && "Unsupported direction was passed!");
        }
    }
} // namespace UserInput
