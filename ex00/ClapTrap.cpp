/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:26:00 by oait-si-          #+#    #+#             */
/*   Updated: 2025/12/05 10:10:35 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap() : Name("Default"), Hit(10), Energy(10), Attack(0) 
{
    std::cout << "ClapTrap Default Constructor called" << std::endl;
}


ClapTrap::ClapTrap(std::string Name) : Name(Name), Hit(10), Energy(10), Attack(0)
{
    std::cout << "ClapTrap " << Name << " is born!" << std::endl;
}


ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << Name << " destroyed." << std::endl;
}