#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

AMateria::AMateria(std::string const& type) : _type(type)
{
    std::cout << "AMateria Constructor called\n";
}

AMateria::AMateria(const AMateria& other) : _type(other._type)
{
    std::cout << "AMateria Copy Constructor called\n";
}

AMateria& AMateria::operator=(const AMateria& other)
{
    std::cout << "AMateria Copy Assignment Instructor called\n";
    if (this != &other)
    {
        this->_type = other._type;
    }
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destructor called\n";
}

std::string const& AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter& target)
{}
