#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string _name;

    public:
        DiamondTrap();
        DiamondTrap(const std::string& name);
        DiamondTrap(const ScavTrap& other);
        DiamondTrap& operator=(const ScavTrap& other);
        ~DiamondTrap();
        void whoAmI();
    
};

#endif