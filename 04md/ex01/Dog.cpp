#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal()
{
    std::cout << "Dog Default Constructor called.\n";
    _type = "Dog";
    _brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog Copy Constructor called.\n";
    _brain = new Brain(*other._brain);
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog Copy Assignment Operator called.\n";
    if (this != &other)
    {
        Animal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain);
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called.\n";
    delete _brain;
}

void Dog::makeSound() const
{
    std::cout << "Wau Wau.\n";
}

Brain* Dog::getBrain() const
{
    return (this->_brain);
}