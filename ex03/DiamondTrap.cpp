/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 13:25:57 by oait-si-          #+#    #+#             */
/*   Updated: 2025/12/07 21:35:25 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "DiamondTrap.h"


DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), FragTrap(), ScavTrap()
{
    this->_Name = "Default";
    this->Hit = FragTrap::Hit;      
    this->Energy = ScavTrap::Energy; 
    this->Attack = FragTrap::Attack; 
    std::cout << "DiamondTrap Default Constructor called" << std::endl;
}


DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
    this->_Name = name; 
    
    this->Hit = FragTrap::Hit;
    this->Energy = ScavTrap::Energy;
    this->Attack = FragTrap::Attack;

    std::cout << "DiamondTrap " << this->_Name << " constructed." << std::endl;
}


DiamondTrap::DiamondTrap(const DiamondTrap& obj) 
    : ClapTrap(obj), FragTrap(obj), ScavTrap(obj)
{
    *this = obj;
    std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->_Name << " destroyed." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj)
{
    if (this != &obj)
    {
        ClapTrap::operator=(obj);
        this->_Name = obj._Name;
    }
    return *this;
}

void DiamondTrap::whoAmI()
{
    
    std::cout << "I am DiamondTrap: " << this->_Name 
              << ", and my ClapTrap name is: " << ClapTrap::_Name << std::endl;
} 