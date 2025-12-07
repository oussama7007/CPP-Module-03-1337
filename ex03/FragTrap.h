



#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.h"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& obj);
        FragTrap& operator=(const FragTrap& obj);
        ~FragTrap();

        
        void highFivesGuys(void);
};

#endif