#include "Board.hpp"
#include "Direction.hpp"
#include "UserInput.hpp"

#include <iostream>

int main()
{
    Board board {};
    std::cout << board;

    std::cout << "Random direction... " << Direction::randomDirection() << "\n";
    std::cout << "Random direction... " << Direction::randomDirection() << "\n";
    std::cout << "Random direction... " << Direction::randomDirection() << "\n";
    std::cout << "Random direction... " << Direction::randomDirection() << "\n\n";

    while (true)
    {
        std::cout << "Enter a command: ";
        char command {UserInput::getCommand()};
        if (command == 'q')
        {
            std::cout << "\n\nBye!\n\n";
            break;
        }

        Direction direction {UserInput::getDirection(command)};
        std::cout << "You entered direction: " << direction << "\n";
    }

    return 0;
}
