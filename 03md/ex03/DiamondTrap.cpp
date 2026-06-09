#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap() , FragTrap()
{
    std::cout << "DT Default constructor called\n";
    _hit = 100;
    _energy = 50;
    _dmg = 30;
}

DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
    std::cout << "DT Name constructor called\n";
    _hit = 100;
    _energy = 50;
    _dmg = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
    std::cout << "DT Copy constructor called\n";
    _name = other._name;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        ScavTrap::operator=(other);
        FragTrap::operator=(other);
        _name = other._name;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DT Destructor called\n";
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am " << _name;
    std::cout << " and my CT name is " << ClapTrap::_name << "\n";
}

void DiamondTrap::attack(const std::string& target)
{
    if (_hit > 0 && _energy > 0)
    {
        _energy--;
        std::cout << "STrap " << _name <<  " attacks " << target << ", causing " << _dmg << " points of damage!\n";
        return ;
    }
    if (_hit == 0)
        std::cout << "STrap " << _name << " dead\n";
    else
        std::cout << "STrap " << _name << " no mana\n";
}