#include "Board.hpp"
#include "Direction.hpp"
#include "UserInput.hpp"

#include <iostream>

int main()
{
    Board board {};

    while (true)
    {
        std::cout << board;
        std::cout << "Enter a command: ";
        char command {UserInput::getCommand()};
        if (command == 'q')
        {
            std::cout << "\n\nBye!\n\n";
            break;
        }

        Direction direction {UserInput::getDirection(command)};
        board.moveTile(direction);
    }

    return 0;
}
