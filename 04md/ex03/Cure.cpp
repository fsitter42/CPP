#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure Default Constructor called\n";
}

Cure::Cure(const Cure& other) : AMateria(other)
{
    std::cout << "Cure Copy Constructor called\n";
    this->_clone = 43;
}

Cure& Cure::operator=(const Cure& other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    return (*this);
}

Cure::~Cure()
{
    std::cout << "Cure Destructor called\n";
}

 AMateria* Cure::clone() const
 {
     AMateria *a = new Cure();
     a->setClone();
     return (a);
 }

 void Cure::use(ICharacter& target)
 {
     std::cout << "* heals " << target.getName() << "'s wounds *\n";
 }
