#ifndef USER_INPUT_H
#define USER_INPUT_H

#include "Direction.hpp"

namespace UserInput
{
    bool isValidCommand(char c);
    void ignoreLine();
    char getCharacter();
    char getCommand();
    Direction getDirection(char c);
} // namespace UserInput

#endif
