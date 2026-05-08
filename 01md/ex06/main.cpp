#include "Harl.hpp"
#include <iostream>

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cout << "needs an argutment";
        return (0);
    }
    Harl a;
    a.complain(av[1]);
}