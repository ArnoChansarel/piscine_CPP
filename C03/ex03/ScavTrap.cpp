/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 19:38:23 by achansar          #+#    #+#             */
/*   Updated: 2023/12/24 17:19:42 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// =========================================================== CONSTRUCTOR

ScavTrap::ScavTrap( void ) : ClapTrap() {
    std::cout << "ScavTrap default constructor called." << std::endl;
    return;
} 

ScavTrap::ScavTrap( std::string n ) : ClapTrap(n) {
    _hitPoint = 100;
    _energyPoint = 50;
    _attackDamage = 200;
    std::cout << "ScavTrap " << getName() << " name constructor called." << std::endl;
    return;
}

ScavTrap::ScavTrap( const ScavTrap& src ) {
    std::cout << "Copy constructor called." << std::endl;
    *this = src;
    return;
}

ScavTrap::~ScavTrap( void ) {
    std::cout << "ScavTrap " << getName() << " desctructor called." << std::endl;
    return;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& src) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_name = src.getName();
    this->_hitPoint = src.getHitPoint();
    this->_energyPoint = src.getEnergyPoint();
    this->_attackDamage = src.getDamage();
    return *this;
}

// =========================================================== MEMBER FUNCTIONS

void ScavTrap::attack(const std::string& target) {
    
    if (_energyPoint && _hitPoint > 0) {
        this->_energyPoint -= 1;
        std::cout   << "ScavTrap " << getName() << " attacks " << target
                    << " causing " << getDamage() << " points of damage !" << std::endl;
    } else {
        std::cout   << "ScavTrap " << getName() << " can't attack !" << std::endl;
    }
    return;
}

void ScavTrap::guardGate( void ) const {
    
    std::cout << "ScavTrap " << getName() << " is in Gate Keeper mode." << std::endl;
    return;
}