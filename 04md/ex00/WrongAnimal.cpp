#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : _type("")
{
    std::cout << "WrongAnimal Default Constructor called.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type(other._type)
{
    std::cout << "WrongAnimal Copy Constructor called.\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "WrongAnimal Copy Assignment Operator called.\n";
    if (this != &other)
    {
        this->_type = other._type;
    }
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called.\n";
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal Sound sounds.\n";
}

const std::string& WrongAnimal::getType() const
{
    return (this->_type);
}


