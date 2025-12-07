

#include "FragTrap.h"



FragTrap::FragTrap() : ClapTrap()
{
    this->Hit = 100;
    this->Energy = 100;
    this->Attack = 30;
    std::cout << "FragTrap Default Constructor called" << std::endl;
}


FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->Hit = 100;
    this->Energy = 100;
    this->Attack = 30;
    std::cout << "FragTrap " << this->_Name << " constructed." << std::endl;
}


FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
    std::cout << "FragTrap Copy Constructor called" << std::endl;
    *this = obj;
}


FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_Name << " destroyed." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
    std::cout << "FragTrap Assignment Operator called" << std::endl;
    if (this != &obj)
    {
        ClapTrap::operator=(obj);
    }
    return *this;
}


void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_Name << " requests a positive high five! 🙌" << std::endl;
}