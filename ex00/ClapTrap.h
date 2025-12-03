/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:26:05 by oait-si-          #+#    #+#             */
/*   Updated: 2025/12/03 10:55:45 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CPP
#define CLAPTRAP_CPP

#include <iostream>

class ClapTrap
{
    private:
        std::string Name;
        int Hit;
        int Energy;
        int Attack;
    public:
        ClapTrap();
        ClapTrap(const ClapTrap& obj);        




        
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        
};

#endif 