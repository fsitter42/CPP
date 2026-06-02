#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _name(""), _hit(10), _energy(10), _dmg(0)
{
    std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hit(10), _energy(10), _dmg(0)
{
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
    if (_hit > 0 && _energy > 0)
    {
        _energy--;
        std::cout << "ClapTrap " << _name <<  " attacks " << target << ", causing " << _dmg << " points of damage!\n";
        return ;
    }
    if (_hit == 0)
        std::cout << "dead\n";
    else
        std::cout << "no mana\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    //
    std::cout << "ClapTrap " << _name <<  " takes " << amount << " points of damage!\n";
    if (amount >= _hit)
    {
        _hit = 0;
        std::cout << "ClapTrap " << _name <<  " dies\n";
    }
    else
    {
        _hit -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hit > 0 && _energy > 0)
    {
        _energy--;
        _hit += amount;
        std::cout << "ClapTrap " << _name <<  " heals for " << amount << "\n";
        return ;
    }
    if (_hit == 0)
        std::cout << "dead\n";
    else
        std::cout << "no mana\n";
}