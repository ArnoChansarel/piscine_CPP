/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:43:31 by achansar          #+#    #+#             */
/*   Updated: 2023/12/28 17:08:13 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// =========================================================== CONSTRUCTOR

PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
		AForm("ShruberryCreationForm", 25, 5),
        _target(target) {
	return;	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) :
	AForm("ShruberryCreationForm", 25, 5) {
	return;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src) {

	if (this != &src) {
		// do something....
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	return;
}

// =========================================================== MEMBER FUNCTION

void PresidentialPardonForm::action() const {
    std::cout << _target << " has been pardoned by Mr. President Zaphold Beeblebrox" << std::endl;
    return;
}
