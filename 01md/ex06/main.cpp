#include "Harl.hpp"
#include <iostream>

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cout << "needs an argument\n";
        return (0);
    }
    Harl a;
    int index = -1;
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == av[1])
            index = i;
    }
    switch (index)
    {
        case 0:
            std::cout << "[ " << levels[0] << " ]\n";
            a.complain(levels[0]);
            std::cout << "\n";
            // fall through
        case 1:
            std::cout << "[ " << levels[1] << " ]\n";
            a.complain(levels[1]);
            std::cout << "\n";
            // fall through
        case 2:
            std::cout << "[ " << levels[2] << " ]\n";
            a.complain(levels[2]);
            std::cout << "\n";
            // fall through
        case 3:
            std::cout << "[ " << levels[3] << " ]\n";
            a.complain(levels[3]);
            std::cout << "\n";
            break;
        case -1:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
    }
}