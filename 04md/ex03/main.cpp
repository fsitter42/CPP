#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

void md04test();
void mytest();

int main()
{
    md04test();
    std::cout << "\n\n\n\n";
    mytest();
    
}

void mytest()
{
    Character a("hundi");
    std::cout << "my name is " << a.getName() << "\n";
    MateriaSource b;
    AMateria* ice = new Ice;
    a.equip(ice);
    a.use(0, a);
    Character c("hansi");
    c = a;
    std::cout << "my name is " << c.getName() << "\n";
    a.unequip(0);
    c.use(0, c);
    Character d(c);
    c.unequip(0);
    Character f("bello");
    d.use(0, f);


    AMateria* ice2 = new Ice;
    b.learnMateria(ice2);

    AMateria* ice3 = b.createMateria("ice");

    d.equip(ice3);
    
    delete ice;
}

void md04test()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
}
