#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("")

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