/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 19:38:23 by achansar          #+#    #+#             */
/*   Updated: 2023/12/26 14:32:11 by achansar         ###   ########.fr       */
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
    _attackDamage = 20;
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
    this->_name = _name;
    this->_hitPoint = _hitPoint;
    this->_energyPoint = _energyPoint;
    this->_attackDamage = _attackDamage;
    return *this;
}

// =========================================================== MEMBER FUNCTIONS

void ScavTrap::attack(const std::string& target) {
    
    if (_energyPoint && _hitPoint > 0) {
        this->_energyPoint -= 1;
        std::cout   << "ScavTrap " << _name << " attacks " << target
                    << " causing " << _attackDamage << " points of damage !" << std::endl;
    } else {
        std::cout   << "ScavTrap " << _name << " can't attack !" << std::endl;
    }
    return;
}

void ScavTrap::guardGate( void ) const {
    
    std::cout << "ScavTrap " << _name << " is in Gate Keeper mode." << std::endl;
    return;
}