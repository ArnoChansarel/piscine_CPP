/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 20:14:49 by achansar          #+#    #+#             */
/*   Updated: 2023/12/26 14:31:28 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// =========================================================== CONSTRUCTOR

FragTrap::FragTrap( std::string n ) {
    _name = n;
    _hitPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << getName() << " name constructor called." << std::endl;
    return;
}

FragTrap::FragTrap( const FragTrap& src ) {
    std::cout << "Copy constructor called." << std::endl;
    *this = src;
    return;
}

FragTrap::~FragTrap( void ) {
    std::cout << "FragTrap " << getName() << " desctructor called." << std::endl;
    return;
}

FragTrap &FragTrap::operator=(const FragTrap& src) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_name = _name;
    this->_hitPoint = _hitPoint;
    this->_energyPoint = _energyPoint;
    this->_attackDamage = _attackDamage;
    return *this;
}

// =========================================================== MEMBER FUNCTIONS

void FragTrap::attack(const std::string& target) {
    
    if (_energyPoint && _hitPoint > 0) {
        this->_energyPoint -= 1;
        std::cout   << "FragTrap " << _name << " attacks " << target
                    << " causing " << _attackDamage << " points of damage !" << std::endl;
    } else {
        std::cout   << "FragTrap " << _name << " can't attack !" << std::endl;
    }
    return;
}

void FragTrap::highFiveGuys( void ) {
    
    std::cout << "You got a new message by FragTrap " << _name << " ! :"
                << " Hi ! Can I get a high five ?" << std::endl;
    return;
}