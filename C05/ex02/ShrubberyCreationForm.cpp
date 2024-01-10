/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:44:23 by achansar          #+#    #+#             */
/*   Updated: 2023/12/28 17:09:08 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

// =========================================================== CONSTRUCTOR

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
		AForm("ShruberryCreationForm", 145, 137),
		_target(target) {
	return;	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) :
	AForm("ShruberryCreationForm", 145, 137) {
	return;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src) {

	if (this != &src) {
		// do something....
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	return;
}

// =========================================================== MEMBER FUNCTION

void ShrubberyCreationForm::action() const {
	std::ofstream output(_target + "_shruberry");

	if (output.is_open()) {
		output << "    ccee88oo\n  C8O8O8Q8P8O8O8\n dOB69QO8PdUOpugoOchs\nCgggbU8OU qOp qOdoUOdcb\n    6OuU  /p u gcoUodpP\n      \\\\\\\\\\\\//  /douUP\n         \\\\\\//\n           |||/\\\n           |||\\/\\";
	} else {
		std::cerr << "Error opening file." << std::endl;
	}
	return;
}
