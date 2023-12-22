/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:22:24 by achansar          #+#    #+#             */
/*   Updated: 2023/12/22 19:31:01 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// ===================================================================== CONSTRUCTORS

AMateria::AMateria() {
    // std::cout << "AMateria default constructor called." << std::endl;
	return;
}

AMateria::AMateria(std::string const & type) : _type(type) {
    // std::cout << "AMateria custom constructor called." << std::endl;
	return;
}

AMateria::AMateria(const AMateria& src) {
    // std::cout << "AMateria copy constructor called." << std::endl;
	*this = src;
	return;
}

AMateria& AMateria::operator=(const AMateria& src) {
    // std::cout << "AMateria assignement operator called." << std::endl;
	if (this != &src) {
		_type = src._type;
	}
	return *this;
}

AMateria::~AMateria() {
    // std::cout << "AMateria default destructor called." << std::endl;
	return;
}

// ===================================================================== MEMBER FUNCTIONS

		
std::string const & AMateria::getType() const {
	return this->_type;
}
		
void AMateria::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return;
}