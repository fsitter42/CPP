#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("hans");

    a.attack("hans");
    b.attack("noname");
    b.attack("name");

    b.beRepaired(10);
    b.takeDamage(5);
    b.takeDamage(16);
}