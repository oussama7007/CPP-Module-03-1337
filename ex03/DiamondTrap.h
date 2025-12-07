/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 13:26:02 by oait-si-          #+#    #+#             */
/*   Updated: 2025/12/07 19:02:05 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ScavTrap.h"
#include "FragTrap.h"

class   DiamondTrap :public FragTrap,  public ScavTrap
{
        private:
            std::string _Name;
        public:
            DiamondTrap();
            DiamondTrap(const std::string& name);
            DiamondTrap(const DiamondTrap& obj);
           
            DiamondTrap& operator=(const DiamondTrap& obj);
            ~DiamondTrap();

            using ScavTrap::attack; 

            void whoAmI();
};

#endif