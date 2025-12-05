/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 11:58:38 by oait-si-          #+#    #+#             */
/*   Updated: 2025/12/05 20:05:13 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.h"


class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const ScavTrap& obj);
        ScavTrap(std::string Name);
        ScavTrap& operator=(const ScavTrap& obj);
        ~ScavTrap();
        
        void    attack(const std::string& target);
        
        void    guardGate();
};

#endif