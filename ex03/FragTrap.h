/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 13:26:10 by oait-si-          #+#    #+#             */
/*   Updated: 2025/12/07 21:42:28 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.h"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& obj);
        FragTrap& operator=(const FragTrap& obj);
        ~FragTrap();




        void attack(const std::string& target)
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
        
        void highFivesGuys(void);
};

#endif