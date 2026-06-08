#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ST Default constructor called\n";
    _hit = 100;
    _energy = 50;
    _dmg = 20;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << "ST Name constructor called\n";
    _hit = 100;
    _energy = 50;
    _dmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ST Copy constructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) 
{
    if (this != &other)
        ClapTrap::operator=(other);
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ST Destructor called\n";
}

void ScavTrap::attack(const std::string& target)
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

void ScavTrap::guardGate()
{
    if (_hit > 0)
    {
        std::cout << "Trap " << _name <<  " enters gg mode\n";
        return ;
    }
    if (_hit == 0)
        std::cout << "Trap " << _name << " dead\n";
}