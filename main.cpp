#include "Board.hpp"
#include "UserInput.hpp"

#include <iostream>

int main()
{
    Board board {};
    std::cout << board;

    char command {};
    while (command != 'q')
    {
        command = UserInput::getCommand();

        switch (command)
        {
        case 'w':
        case 'a':
        case 's':
        case 'd':
            std::cout << "Valid command: " << command << "\n";
            break;
        case 'q':
            std::cout << "\n\nBye!\n\n";
            break;
        }
    }

    return 0;
}
