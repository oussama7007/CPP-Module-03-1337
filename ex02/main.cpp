/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 13:25:28 by oait-si-          #+#    #+#             */
/*   Updated: 2025/12/07 13:25:29 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */






#include "FragTrap.h"
#include "ScavTrap.h"



int main()
{
    {
        std::cout << "------------------base test-------------------\n" << std::endl;
        FragTrap a("RobotA");
        // ClapTrap b(a);

        a.attack("building");
        a.takeDamage(10);
        a.beRepaired(0000000000000);
        a.highFivesGuys();
    }
    std::cout << "### TESTING POLYMORPHISM (VIRTUAL DESTRUCTOR) ###\n" << std::endl;
    {
        ClapTrap* a = new FragTrap("allocation");
        
        a->attack("target");
        delete a;
    }
}