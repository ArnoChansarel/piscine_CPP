/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 21:28:14 by achansar          #+#    #+#             */
/*   Updated: 2023/08/12 16:26:57 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <FragTrap.hpp>
#include <ScavTrap.hpp>

class DiamondTrap : public FragTrap, public ScavTrap {
    
    public:
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap&);
        ~DiamondTrap();
        DiamondTrap& operator=(const DiamondTrap&);

        // void attack(const std::string& target) {
        //     ScavTrap::attack(const std::string& target);
        // }

    // private:
    //     std::string     _name;
    //     unsigned int    _hitPoint;
    //     unsigned int    _energyPoint;
    //     unsigned int    _attackDamage;

};