#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

AMateria::AMateria(std::string const& type) : _type(type), _clone(42)
{
    std::cout << "AMateria Constructor called\n";
}

AMateria::AMateria(const AMateria& other) : _type(other._type), _clone(42)
{
    std::cout << "AMateria Copy Constructor called\n";
}

AMateria& AMateria::operator=(const AMateria& other)
{
    std::cout << "AMateria Copy Assignment Instructor called\n";
    if (this != &other)
    {
        this->_type = other._type;
        this->_clone = 42;
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
{
    (void) target;
}

char const& AMateria::getClone() const
{
    return (this->_clone);
}

void AMateria::setClone()
{
    this->_clone = 43;
}
