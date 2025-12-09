/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 13:26:13 by oait-si-          #+#    #+#             */
/*   Updated: 2025/12/07 22:15:40 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */






#include "DiamondTrap.h"


int main()
{
    DiamondTrap d("Monster");

    d.whoAmI();
    d.attack("Target"); 

    d.highFivesGuys();
    d.guardGate();
 
    return 0;
}