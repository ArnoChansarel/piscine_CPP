/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:54:10 by achansar          #+#    #+#             */
/*   Updated: 2023/08/11 20:11:42 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// =========================================================== CONSTRUCTOR

ClapTrap::ClapTrap( void ) : _name("None"), _hitPoint(10), _energyPoint(10), _attackDamage(0) {
    std::cout << "ClapTrap default constructor called." << std::endl;
    return;
}

ClapTrap::ClapTrap( std::string n ) : _name(n), _hitPoint(10), _energyPoint(10), _attackDamage(0) {
    std::cout << "ClapTrap " << getName() << " name constructor called." << std::endl;
    return;
}

ClapTrap::ClapTrap( const ClapTrap& src ) {
    std::cout << "ClapTrap copy constructor called." << std::endl;
    *this = src;
    return;
}

ClapTrap::~ClapTrap( void ) {
    std::cout << "ClapTrap " << getName() << " desctructor called." << std::endl;
    return;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& src) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_name = src.getName();
    this->_hitPoint = src.getHitPoint();
    this->_energyPoint = src.getEnergyPoint();
    this->_attackDamage = src.getDamage();
    return *this;
}

// =========================================================== GETTER & SETTER

std::string ClapTrap::getName() const {
    return this->_name;
}

unsigned int ClapTrap::getHitPoint() const {
    return this->_hitPoint;
}

unsigned int ClapTrap::getEnergyPoint() const {
    return this->_energyPoint;
}

unsigned int ClapTrap::getDamage() const {
    return this->_attackDamage;
}

// =========================================================== MEMBER FUNCTIONS

void ClapTrap::attack(const std::string& target) {
    
    if (_energyPoint && _hitPoint > 0) {
        this->_energyPoint -= 1;
        std::cout   << "Claptrap " << getName() << " attacks " << target
                    << " causing " << getDamage() << " points of damage !" << std::endl;
    } else {
        std::cout   << "Claptrap " << getName() << " can't attack !" << std::endl;
    }
    return;
}

void ClapTrap::takeDamage(unsigned int amount) {
    this->_hitPoint -= amount;
    if (this->_hitPoint <= 0)
        this->_hitPoint = 0;
    std::cout   << "Claptrap " << getName() << " took " << amount
                << " point of damage !" << std::endl
                << "It has " << getHitPoint() << " hit points left." << std::endl;
    if (!this->_hitPoint)
        std::cout << "Claptrap " << getName() << " is dead !" << std::endl;
    return;
}

void ClapTrap::beRepaired(unsigned int amount) {
    
    if (_energyPoint && _hitPoint > 0) {
        this->_energyPoint -= 1;
        std::cout   << "Claptrap " << getName() << " repairs itself by " << amount << " points."
                    << std::endl << "It has " << getHitPoint() << " hit points left." << std::endl;
    } else {
        std::cout   << "Claptrap " << getName() << " can't repair !" << std::endl;
    }
    return;
}