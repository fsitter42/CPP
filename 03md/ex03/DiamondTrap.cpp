#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap() , FragTrap(), _name("")
{
    std::cout << "DiamondTrap Default constructor called\n";
    _hit = 100;
    _energy = 50;
    _dmg = 30;
}

DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
    std::cout << "DiamondTrap Name constructor called\n";
    _hit = 100;
    _energy = 50;
    _dmg = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name)
{
    std::cout << "DiamondTrap Copy constructor called\n";
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
    std::cout << "DiamondTrap Destructor called\n";
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am DiamondTrap " << _name;
    std::cout << " and my ClapTrap name is " << ClapTrap::_name << "\n";
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}