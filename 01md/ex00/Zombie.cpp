#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( std::string name)
{
    this->name = name;
}

Zombie::~Zombie(void)
{
    std::cout << name << ": dead!\n";
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

// int main ()
// {
//     Zombie a("hundi");
//     a.announce();
// }