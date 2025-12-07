/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 13:26:13 by oait-si-          #+#    #+#             */
/*   Updated: 2025/12/07 20:03:58 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */






#include "DiamondTrap.h"


int main()
{
    DiamondTrap d("Monster");

    d.whoAmI();
    d.attack("Target"); 
    ClapTrap a;
    FragTrap c;
    ScavTrap j;
    std::cout << "sizeof class is " << sizeof(a) << std::endl;
    std::cout << "sizeof class is " << sizeof(c) << std::endl;
    std::cout << "sizeof class is " << sizeof(j) << std::endl;


    return 0;
}