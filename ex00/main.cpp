/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:26:09 by oait-si-          #+#    #+#             */
/*   Updated: 2025/12/05 12:09:47 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main()
{
  
    std::cout << "--- CREATION ---" << std::endl;
    ClapTrap robot("Oussama");
    
    
    std::cout << "\n--- ATTACK TEST ---" << std::endl;
    robot.attack("{My target}");
    
  
    std::cout << "\n--- DAMAGE TEST ---" << std::endl;
    robot.takeDamage(5); 

    std::cout << "\n--- REPAIR TEST ---" << std::endl;
    robot.beRepaired(3); 

  
    std::cout << "\n--- DEATH TEST ---" << std::endl;
    robot.takeDamage(100); 
    robot.attack("Target Dummy");
    robot.beRepaired(10); 

    std::cout << "\n--- ENERGY DEPLETION TEST (New Robot) ---" << std::endl;
    ClapTrap robot2("*el3erbi*");
    for(int i = 0; i < 12; i++) 
        robot2.attack("Spam Target");
    std::cout << "\n--- DESTRUCTION ---" << std::endl;
    return 0;
}