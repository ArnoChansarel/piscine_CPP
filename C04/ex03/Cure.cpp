/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:46:24 by achansar          #+#    #+#             */
/*   Updated: 2023/12/22 16:47:58 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Character.hpp"

// ===================================================================== CONSTRUCTORS

Cure::Cure() : AMateria("cure") {
    // std::cout << "Cure default constructor called." << std::endl;
	return;
}

Cure::Cure(const Cure& src) : AMateria(src.getType()) {
    // std::cout << "Cure copy constructor called." << std::endl;
	*this = src;
	return;
}

Cure& Cure::operator=(const Cure& src) {
    // std::cout << "Cure assignement operator called." << std::endl;
	if (this != &src) {
		AMateria::operator=(src);
	}
	return *this;
}

Cure::~Cure() {
    // std::cout << "Cure default destructor called." << std::endl;
	return;
}

// ===================================================================== MEMBERS FUNCTIONS

Cure* Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return;
}
