/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:48:58 by achansar          #+#    #+#             */
/*   Updated: 2023/12/22 16:48:11 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Character.hpp"

// ===================================================================== CONSTRUCTORS

Ice::Ice() : AMateria("ice") {
    // std::cout << "Ice default constructor called." << std::endl;
	return;
}

Ice::Ice(const Ice& src) : AMateria(src.getType()) {
    // std::cout << "Ice copy constructor called." << std::endl;
	*this = src;
	return;
}

Ice& Ice::operator=(const Ice& src) {
    // std::cout << "Ice assignement operator called." << std::endl;
	if (this != &src) {
		AMateria::operator=(src);
	}
	return *this;
}

Ice::~Ice() {
    // std::cout << "Ice default destructor called." << std::endl;
	return;
}

// ===================================================================== MEMBERS FUNCTIONS

Ice* Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return;
}
