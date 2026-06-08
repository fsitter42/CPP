#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap a("hundi");
    a.attack("katzi");
    for (int i = 0; i < 67; i++)
        a.attack("katzi");
    a.takeDamage(99);
    a.takeDamage(2);
    a.whoAmI();
}