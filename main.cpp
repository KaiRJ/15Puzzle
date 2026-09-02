#include "Board.hpp"
#include "Direction.hpp"
#include "UserInput.hpp"

#include <iostream>

int main()
{
    Board board {};
    board.randomise();

    while (!board.playerWon())
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

    std::cout << "\n\nYou won!\n\n";
    return 0;
}
