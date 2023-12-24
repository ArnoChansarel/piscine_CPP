/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:42:54 by achansar          #+#    #+#             */
/*   Updated: 2023/12/24 17:43:35 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
//                                                      Pourquoi cet ordre cause une erreur ???
DiamondTrap::DiamondTrap( std::string n ) : ScavTrap(n), FragTrap(n) {
    _name = n;
    ClapTrap::_name += "_clap_trap";

    std::cout << "DiamondTrap " << _name << " name constructor called." << std::endl;
    return;
}

// DiamondTrap::DiamondTrap( const DiamondTrap& src ) {
//     std::cout << "Copy constructor called." << std::endl;
//     *this = src;
//     return;
// }

DiamondTrap::~DiamondTrap( void ) {
    std::cout << "DiamondTrap " << _name << " desctructor called." << std::endl;
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


void DiamondTrap::whoAmI() const {
    std::cout   << "Hi, my name is " << _name << std::endl
                << "And my clapname is " << ClapTrap::getName() << std::endl;
    return;
}

