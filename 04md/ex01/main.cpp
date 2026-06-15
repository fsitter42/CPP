#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;

    Animal* animals[10];
    for (int i = 0; i < 5; i++)
        animals[i] = new Dog();
    for (int i = 5; i < 10; i++)
        animals[i] = new Cat();
    for (int i = 0; i < 10; i++)
        delete animals[i];


    Dog d1;
    d1.getBrain()->learn(0, "tsching tschong tsa tsee");

    Dog d2;
    d2.getBrain()->learn(0, "wabalaba ding dong");

    std::cout << *d1.getBrain()->think(0) << "\n";
    std::cout << *d2.getBrain()->think(0) << "\n";
    return 0;
}