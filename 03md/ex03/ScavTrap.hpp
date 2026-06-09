#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : virtual public ClapTrap
{
  public:
      ScavTrap();
      ScavTrap(const std::string& name);
      ScavTrap(const ScavTrap& other);
      ScavTrap& operator=(const ScavTrap& other);
      ~ScavTrap();
      void attack(const std::string& target);
      void guardGate();
  protected:
      static const int defaultHealth = 100;
      static const int defaultEnergy = 50;
      static const int defaultDmg = 20;
};

#endif