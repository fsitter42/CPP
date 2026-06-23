#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice Default Constructor called\n";
}

Ice::Ice(const Ice& other) : AMateria(other)
{
    std::cout << "Ice Copy Constructor called\n";
}

Ice& Ice::operator=(const Ice& other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    return (*this);
}

Ice::~Ice()
{
    std::cout << "Ice Destructor called\n";
}

 AMateria* Ice::clone() const
 {
     AMateria *a = new Ice();
     return (a);
 }

 void Ice::use(ICharacter& target)
 {
     std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
 }