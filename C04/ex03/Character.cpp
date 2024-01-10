/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:08:36 by achansar          #+#    #+#             */
/*   Updated: 2023/12/27 12:49:44 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "Ice.hpp"

// ===================================================================== CONSTRUCTORS

Character::Character(std::string name) : _name(name) {
    // std::cout << "Character custom constructor called." << std::endl;
	for (int i = 0; i < 4; i++) {
		if (_inventory[i])
		_inventory[i] = nullptr;
	}
	return;
}

Character::Character(const Character& src) : _name(src.getName()) {
    // std::cout << "Character copy constructor called." << std::endl;
	*this = src;
	return;
}

Character& Character::operator=(const Character& src) {
    // std::cout << "Character copy asignement called." << std::endl;
	if (this != &src) {
		_name = src.getName() + "2";
		for (int i = 0; i < 4 ; i++) {
			if (this->_inventory[i]) {
				delete this->_inventory[i];
			}
			if (src._inventory[i]) {
				this->_inventory[i] = src._inventory[i]->clone();
			}
		}
	}
	return *this;
}

Character::~Character() {
	// std::cout << "Character default destructor called." << std::endl;
	return;
};

// ===================================================================== MEMBERS FUNCTIONS
	
std::string const & Character::getName() const {
	return _name;
}
		
void Character::equip(AMateria* m) {
	int i = 0;
	while (_inventory[i])
		i++;
	if (i < 4) {
		std::cout << getName() << " equipped " << m->getType() << " at slot " << i + 1 << std::endl;
		_inventory[i] = m;
	} else {
		std::cout << "Inventory full !" << std::endl;
	}
	return;	
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4 && _inventory[idx]) {
		std::cout << getName() << " unequipped " << _inventory[idx]->getType() << std::endl;
		_inventory[idx] = 0;
	}
	return;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && _inventory[idx]) {
		_inventory[idx]->use(target);
	}
	return;
}
