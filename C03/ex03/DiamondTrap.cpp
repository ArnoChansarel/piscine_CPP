/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:42:54 by achansar          #+#    #+#             */
/*   Updated: 2023/12/26 14:29:47 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// =========================================================== CONSTRUCTOR

DiamondTrap::DiamondTrap() {
    std::cout << "DiamondTrap default constructor called." << std::endl;
    return;
}

DiamondTrap::DiamondTrap( std::string n ) : ScavTrap(n), FragTrap(n) {
    _name = n;
    ClapTrap::_name += "_clap_trap";

    FragTrap::_hitPoint = 100;
    FragTrap::_attackDamage = 30;

    std::cout << "DiamondTrap " << _name << " name constructor called." << std::endl;
    return;
}

DiamondTrap::DiamondTrap( const DiamondTrap& src ) {
    std::cout << "Copy constructor called." << std::endl;
    *this = src;
    return;
}

DiamondTrap::~DiamondTrap( void ) {
    std::cout << "DiamondTrap " << _name << " desctructor called." << std::endl;
    return;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &rhs)
{
	if(this == &rhs)
		return *this;
	this->_attackDamage = rhs._attackDamage;
	this->_energyPoint = rhs._energyPoint;
	this->_hitPoint = rhs._hitPoint;
	this->_name = rhs._name;
	return *this;
}

// =========================================================== MEMBER FUNCTIONS

void DiamondTrap::whoAmI() const {
    std::cout   << "Hi, my name is " << _name << std::endl
                << "And my clapname is " << ClapTrap::getName() << std::endl;
    return;
}
