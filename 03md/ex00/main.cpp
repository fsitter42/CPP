#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a;
    ClapTrap b("hundi");

    a.attack("hundi");
    b.attack("constanze");
    
    a.takeDamage(600);   
    b.takeDamage(5);

    a.beRepaired(500);
    b.beRepaired(5);

    ClapTrap c;
    c = b;

    ClapTrap d = c;

    c.attack("d");
    d.takeDamage(6);
    d.beRepaired(7);    
}