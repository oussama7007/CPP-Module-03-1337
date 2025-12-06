/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 11:58:32 by oait-si-          #+#    #+#             */
/*   Updated: 2025/12/06 15:48:11 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.h"
#include <iostream>

int main()
{
    {
        std::cout << "\033[34mConstructing ScavTrap a:\033[0m" << std::endl;
        ScavTrap a("RobotA");
        
        std::cout << "\n\033[34mConstructing ScavTrap b (Copy of a):\033[0m" << std::endl;
        ScavTrap b(a);
    }
    std::cout << "\n\033[31m[Destructors for a and b should appear above this line]\033[0m" << std::endl;

    std::cout << "\n------------------------------------------------------------\n" << std::endl;

    std::cout << "### TESTING MEMBER FUNCTIONS ###\n" << std::endl;
    {
        ScavTrap c("GuardBot");
        
        // 1. Test Attack (Should say "ScavTrap ... attacks")
        c.attack("Intruder");
        
        // 2. Test Guard Gate (Unique to ScavTrap)
        c.guardGate();
        
        // 3. Test inherited functions
        c.takeDamage(10);
        c.beRepaired(10);
    }

    std::cout << "\n------------------------------------------------------------\n" << std::endl;

    std::cout << "### TESTING POLYMORPHISM (VIRTUAL DESTRUCTOR) ###\n" << std::endl;
    {
        std::cout << "\033[34mAllocating ScavTrap as a ClapTrap pointer:\033[0m" << std::endl;
        ClapTrap* ptr = new ScavTrap("Polymorph");

        // 4. Test Attack through pointer
        // If attack() is virtual in ClapTrap, this prints ScavTrap attack.
        // If not virtual, it prints ClapTrap attack. (Subject doesn't strictly require virtual attack, but it's good practice)
        std::cout << "\nCalling attack via ClapTrap pointer:" << std::endl;
        ptr->attack("Target");

        std::cout << "\n\033[34mDeleting the pointer:\033[0m" << std::endl;
        // CRITICAL CHECK: This MUST print ~ScavTrap followed by ~ClapTrap
        delete ptr; 
    }
}