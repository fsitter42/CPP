#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(const std::string& name);
        FragTrap(const FragTrap& other);
        FragTrap& operator=(const FragTrap& other);
        ~FragTrap();
        void highFiveGuys(void);
    protected:
        static const int defaultHealth = 100;
        static const int defaultEnergy = 100;
        static const int defaultDmg = 30;    
};

#endif