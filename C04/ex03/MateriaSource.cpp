/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:58:14 by achansar          #+#    #+#             */
/*   Updated: 2023/12/22 19:21:20 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"

// ===================================================================== CONSTRUCTORS

MateriaSource::MateriaSource() {
	// std::cout << "MateriaSource default constructor called." << std::endl;
	for (int i = 0; i < 4; i++) {
		if (_memory[i])
		_memory[i] = nullptr;
	}
	return;
}
	
MateriaSource::MateriaSource(const MateriaSource& src) {
	*this = src;
	return;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src) {
	if (this != &src) {
		for (int i = 0; i < 4 ; i++) {
			if (this->_memory[i]) {
				delete this->_memory[i];
			}
			if (src._memory[i]) {
				this->_memory[i] = src._memory[i]->clone();
			}
		}
	}	
	return *this;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource default destructor called." << std::endl;
		for (int i = 0; i < 4; i++) {
		if (_memory[i])
			delete _memory[i];
	}
	return;
}

// ===================================================================== MEMBERS FUNCTIONS

void MateriaSource::learnMateria(AMateria* src) {
	for ( int i = 0; i < 4; i++) {
		if (!_memory[i]) {
			_memory[i] = src->clone();
			return;
		}
	}
	return;
}
		
AMateria* MateriaSource::createMateria(std::string const & type) {
	if (type == "cure" || type == "ice") {
		for (int i = 0; i < 4; i++) {
			if (_memory[i] && _memory[i]->getType() == type) {
				AMateria* element = _memory[i]->clone();
				return element;
			}
		}
	}
	std::cout << "Materia does not exist." << std::endl;
	return NULL;
}
