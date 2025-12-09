/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 13:26:06 by oait-si-          #+#    #+#             */
/*   Updated: 2025/12/07 18:49:13 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





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