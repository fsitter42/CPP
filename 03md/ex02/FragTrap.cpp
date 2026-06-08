#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FT Default constructor called\n";
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << "FT Name constructor called\n";
    _hit = 100;
    _energy = 100;
    _dmg = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FT Copy constructor called\n";
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
        ClapTrap::operator=(other);
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FT Destructor called\n";
}

void FragTrap::highFiveGuys(void)
{
    std::cout << "FT positive high-five message.\n";
}