/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 11:58:35 by oait-si-          #+#    #+#             */
/*   Updated: 2025/12/06 18:43:32 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

ScavTrap::ScavTrap()  :ClapTrap()
{
    this->Hit = 100;
    this->Energy = 50;
    this->Attack = 20;
    std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    this->Hit = 100;
    this->Energy = 50;
    this->Attack = 20;
    std::cout << "ScavTrap " << this->_Name << " constructed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
    std::cout << "ScavTrap Copy Constructor called" << std::endl;
    *this = obj;
}


ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _Name << " destroyed." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
    std::cout << "ScavTrap Assignment Operator called" << std::endl;
    if (this != &obj)
    {
        ClapTrap::operator=(obj); 
    }
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (Energy <= 0 || Hit <= 0)
    {
        std::cout << "ScavTrap " << _Name << " cannot attack." << std::endl;
        return;
    }
    Energy--;
    std::cout << "ScavTrap " << _Name << " attacks " << target 
              << " vigorously, dealing " << Attack << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_Name << " is now in Gate keeper mode." << std::endl;
}