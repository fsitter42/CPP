#include "Zombie.hpp"

void randomChump( std::string name );
Zombie* newZombie( std::string name );

int main ()
{
    Zombie *a = newZombie("hundi");
    a->announce();
    randomChump("wauwau");
    delete a;
}
