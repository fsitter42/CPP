#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal()
{
    std::cout << "Dog Default Constructor called.\n";
    _type = "Dog";
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog Copy Constructor called.\n";
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog Copy Assignment Operator called.\n";
    if (this != &other)
        Animal::operator=(other);
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called.\n";
}

void Dog::makeSound() const
{
    std::cout << "Wau Wau.\n";
}