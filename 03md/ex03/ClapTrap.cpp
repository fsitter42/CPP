#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _name("default"), _hit(10), _energy(10), _dmg(0)
{
    std::cout << "CT Default constructor called\n";
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hit(10), _energy(10), _dmg(0)
{
    std::cout << "CT Name constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hit(other._hit), _energy(other._energy), _dmg(other._dmg)
{
    std::cout << "CT Copy constructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "CT Copy assignment operator called\n";
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
    std::cout << "CT Destructor called\n";
}

void ClapTrap::attack(const std::string& target)
{
    if (_hit > 0 && _energy > 0)
    {
        _energy--;
        std::cout << "Trap " << _name <<  " attacks " << target << ", causing " << _dmg << " points of damage!\n";
        return ;
    }
    if (_hit == 0)
        std::cout << "Trap " << _name << " dead\n";
    else
        std::cout << "Trap " << _name << " no mana\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    //
    std::cout << "Trap " << _name <<  " takes " << amount << " points of damage!\n";
    if (amount >= _hit)
    {
        _hit = 0;
        std::cout << "Trap " << _name <<  " dies\n";
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
        std::cout << "Trap " << _name <<  " heals for " << amount << "\n";
        return ;
    }
    if (_hit == 0)
        std::cout << "dead\n";
    else
        std::cout << "no mana\n";
}