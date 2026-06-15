#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    j->makeSound();
    i->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    std::cout << "\n\n\n";

    const WrongAnimal* w = new WrongCat();
    w->makeSound();
    delete w;

    std::cout << "\n\n\n";

    Dog d1;
    Dog d2(d1);
    Dog d3;
    d3 = d1;

    std::cout << d2.getType() << "\n";
    std::cout << d3.getType() << "\n\n\n";
}