#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _name(" "), _hit(10), _energy(10), _dmg(0)
{
    std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(std::string name) : _hit(10), _energy(10), _dmg(0)
{
    _name = name;
    std::cout << "Name constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hit(other._hit), _energy(other._energy), _dmg(other._dmg)
{
    std::cout << "Copy constructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &other)
    {
        _name = other._name;
        _hit = other._hit;
        _energy = other._energy;
        _dmg = other._dmg;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called\n";
}

void ClapTrap::attack(const std::string& target)
{
    // if _hit && _energy > 0
    // does this->_dmg to target (how to i reduce _hit in target?)
    // cost 1 _energy
    // std::cout ClapTrap <name> attacks <target>, causing <damage> points of damage!
}

void ClapTrap::takeDamage(unsigned int amount)
{
    //
}

void ClapTrap::beRepaired(unsigned int amount)
{
    // if _hit && _energy > 0
    // this->_hit += amount
    // costs 1 energy
}