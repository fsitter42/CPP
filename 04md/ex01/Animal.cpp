#include "Animal.hpp"
#include <iostream>

Animal::Animal() : _type("")
{
    std::cout << "Animal Default Constructor called.\n";
}

Animal::Animal(const Animal& other) : _type(other._type)
{
    std::cout << "Animal Copy Constructor called.\n";
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal Copy Assignment Operator called.\n";
    if (this != &other)
    {
        this->_type = other._type;
    }
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called.\n";
}

void Animal::makeSound() const
{
    std::cout << "Animal Sound sounds.\n";
}

const std::string& Animal::getType() const
{
    return (this->_type);
}


