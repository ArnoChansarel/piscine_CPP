/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:42:54 by achansar          #+#    #+#             */
/*   Updated: 2023/08/12 16:57:00 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string n ) : ClapTrap( n ), ScavTrap( n ), FragTrap( n ) {
    // _name = n;
    _hitPoint = FragTrap::_hitPoint;
    // _energyPoint = ScavTrap::_energyPoint;
    // _attackDamage = FragTrap::_attackDamage;
    // std::cout << "DiamondTrap " << getName() << " name constructor called." << std::endl;
    return;
}

// DiamondTrap::DiamondTrap( const DiamondTrap& src ) {
//     std::cout << "Copy constructor called." << std::endl;
//     *this = src;
//     return;
// }

DiamondTrap::~DiamondTrap( void ) {
    // std::cout << "DiamondTrap " << getName() << " desctructor called." << std::endl;
    return;
}

// DiamondTrap &DiamondTrap::operator=(const DiamondTrap& src) {
//     std::cout << "Copy assignment operator called" << std::endl;
//     this->_name = src.getName();
//     this->_hitPoint = src.getHitPoint();
//     this->_energyPoint = src.getEnergyPoint();
//     this->_attackDamage = src.getDamage();
//     return *this;
// }

