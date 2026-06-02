#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
  private:
      std::string _name;
      int _hit;
      int _energy;
      int _dmg;

  public:
      ClapTrap();
      ClapTrap(std::string name);
      ClapTrap(const ClapTrap& other);
      ClapTrap& operator=(const ClapTrap& other);
      ~ClapTrap();
      void attack(const std::string& target);
      void takeDamage(unsigned int amount);
      void beRepaired(unsigned int amount);
};

#endif