/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 11:58:32 by oait-si-          #+#    #+#             */
/*   Updated: 2025/12/06 17:35:09 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.h"
#include <iostream>

int main()
{
    std::cout << "\n------------------------------------------------------------\n" << std::endl;
    {
        
        ScavTrap a("RobotA");
        std::cout << "Constructing ScavTrap b (Copy of a)" << std::endl;
        ClapTrap b = a;
    }
    std::cout << "-----------------[Destructors for a and b should appear above this line]---------------------" << std::endl;

    {
        ScavTrap c("GuardBot");
        c.attack("Intruder");

        c.guardGate();

        c.takeDamage(10);
        c.beRepaired(10);
    }

    std::cout << "\n------------------------------------------------------------\n" << std::endl;

    std::cout << "### TESTING POLYMORPHISM (VIRTUAL DESTRUCTOR) ###\n" << std::endl;
    {
        std::cout << "Allocating ScavTrap as a ClapTrap pointer:" << std::endl;
        ClapTrap* ptr = new ScavTrap("Polymorph");

        std::cout << "\nCalling attack via ClapTrap pointer:" << std::endl;
        ptr->attack("Target");

        std::cout << "\nmDeleting the pointer:" << std::endl;

        delete ptr; 
    }
}