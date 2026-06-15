#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() : _type("")
{
    std::cout << "AAnimal Default Constructor called.\n";
}

AAnimal::AAnimal(const AAnimal& other) : _type(other._type)
{
    std::cout << "AAnimal Copy Constructor called.\n";
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
    std::cout << "AAnimal Copy Assignment Operator called.\n";
    if (this != &other)
    {
        this->_type = other._type;
    }
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal Destructor called.\n";
}

const std::string& AAnimal::getType() const
{
    return (this->_type);
}