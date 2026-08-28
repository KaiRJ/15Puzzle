#include "UserInput.hpp"

#include <iostream>
#include <limits>

namespace UserInput
{
    bool isValidCommand(char c)
    {
        return c == 'w' || c == 'a' || c == 's' || c == 'd' || c == 'q';
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
} // namespace UserInput
