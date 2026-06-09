#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap Default constructor called\n";
    this->_hit = ScavTrap::defaultHealth;
    this->_energy = ScavTrap::defaultEnergy;
    this->_dmg = ScavTrap::defaultDmg;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << "ScavTrap Name constructor called\n";
    this->_hit = ScavTrap::defaultHealth;
    this->_energy = ScavTrap::defaultEnergy;
    this->_dmg = ScavTrap::defaultDmg;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap Copy constructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) 
{
    if (this != &other)
        ClapTrap::operator=(other);
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called\n";
}

void ScavTrap::attack(const std::string& target)
{
    if (_hit > 0 && _energy > 0)
    {
        _energy--;
        std::cout << "ScavTrap " << _name <<  " attacks " << target << ", causing " << _dmg << " points of damage!\n";
        return ;
    }
    if (_hit == 0)
        std::cout << "ScavTrap " << _name << " dead\n";
    else
        std::cout << "ScavTrap " << _name << " no mana\n";
}

void ScavTrap::guardGate()
{
    if (_hit > 0)
    {
        std::cout << "ScavTrap " << _name <<  " enters gg mode\n";
        return ;
    }
    if (_hit == 0)
        std::cout << "ScavTrap " << _name << " dead\n";
}