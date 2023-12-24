/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:44:31 by achansar          #+#    #+#             */
/*   Updated: 2023/12/23 16:51:35 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap {
    
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap&);
        ~ClapTrap();
        ClapTrap& operator=(const ClapTrap&);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string getName() const;
        unsigned int getHitPoint() const;
        unsigned int getEnergyPoint() const;
        unsigned int getDamage() const;

        void setEnergyPoint(int nb);

    protected:
        std::string     _name;
        unsigned int    _hitPoint;
        unsigned int    _energyPoint;
        unsigned int    _attackDamage;
};
