

#include "ClapTrap.h"

ClapTrap::ClapTrap() : _Name("Default"), Hit(10), Energy(10), Attack(0) 
{
    std::cout << "ClapTrap Default Constructor called" << std::endl;
}


ClapTrap::ClapTrap(std::string Name) :_Name(Name), Hit(10), Energy(10), Attack(0)
{
    std::cout << "ClapTrap " << _Name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
    *this = obj;
    

}


ClapTrap&  ClapTrap::operator=(const ClapTrap& obj)
{
    std::cout << "ClapTrap Copy Assignment Operator called" << std::endl;
    if(this != &obj)
    {
        this->_Name = obj._Name;
        this->Hit = obj.Hit;
        this->Energy = obj.Energy;
        this->Attack = obj.Attack;
    }
    return *this;
}


void    ClapTrap::attack(const std::string& target)
{
    if(Energy <= 0)
    {
        std::cout << "ClapTrap " << _Name << " has no energy left to attack!" << std::endl;
        return;        
    }
    if(Hit <= 0)
    {
        std::cout << "ClapTrap " << _Name << " is dead and cannot attack!" << std::endl;
        return;
    }
    Energy--;
    std::cout << "ClapTrap " << _Name << " attacks " << target 
              << ", causing " << Attack << " points of damage!" << std::endl;
}

void        ClapTrap::takeDamage(unsigned int amount)
{
    if(Hit <= 0)
    {
        std::cout << "ClapTrap " << _Name << " is already dead!" << std::endl;
        return;
    }
    if((int)amount >= Hit)
        Hit = 0;
    else 
        Hit -= amount;
    std::cout << "ClapTrap " << _Name << " takes " << amount 
              << " points of damage! (Current HP: " << Hit << ")" << std::endl;
}





void    ClapTrap::beRepaired(unsigned int amount)
{
    if (Energy <= 0)
    {
        std::cout << "ClapTrap " << _Name << " has no energy left to repair!" << std::endl;
        return;
    }
    if (Hit <= 0)
    {
        std::cout << "ClapTrap " << _Name << " is dead and cannot be repaired!" << std::endl;
        return;
    }
    Energy--;
    Hit += amount;
    std::cout << "ClapTrap " << _Name << " repairs itself, recovering " 
              << amount << " hit points! (Current HP: " << Hit << ")" << std::endl;
}



ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _Name << " destroyed." << std::endl;
}

