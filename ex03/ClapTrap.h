/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 13:25:52 by oait-si-          #+#    #+#             */
/*   Updated: 2025/12/07 13:25:53 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string _Name;
        int Hit;
        int Energy;
        int Attack;
    public:
        ClapTrap();
        ClapTrap(const ClapTrap& obj);        
        ClapTrap(std::string   Name);
        ClapTrap& operator=(const ClapTrap& obj);
        virtual ~ClapTrap();

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        
};

#endif 