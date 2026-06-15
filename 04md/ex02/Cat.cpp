#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
    std::cout << "Cat Default Constructor called.\n";
    _type = "Cat";
    _brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat Copy Constructor called.\n";
    _brain = new Brain(*other._brain);
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat Copy Assignment Operator called.\n";
    if (this != &other)
    {
        Animal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain);
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called.\n";
    delete _brain;
}

void Cat::makeSound() const
{
    std::cout << "Miau Miau.\n";
}

Brain* Cat::getBrain() const
{
    return (this->_brain);
}
