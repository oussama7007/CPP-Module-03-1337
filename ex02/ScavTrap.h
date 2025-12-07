



#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.h"


class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const ScavTrap& obj);
        ScavTrap(std::string Name);
        ScavTrap& operator=(const ScavTrap& obj);
        ~ScavTrap();
        
        void    attack(const std::string& target);
        
        void    guardGate();
};

#endif