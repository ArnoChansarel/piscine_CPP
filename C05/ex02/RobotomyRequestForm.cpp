/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:55:13 by achansar          #+#    #+#             */
/*   Updated: 2024/02/07 10:11:52 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// =========================================================== CONSTRUCTOR

RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
		AForm("RobotomyRequestForm", 72, 45),
        _target(target) {
	return;	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) :
	AForm("RobotomyRequestForm", 72, 45) {
	*this = src;
	return;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src) {

	if (this != &src) {
		AForm::operator=(src);
		_target = src._target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	return;
}

// =========================================================== MEMBER FUNCTION

void RobotomyRequestForm::action() const {
    std::cout << "Drilling noises.............." << std::endl;
    
	std::srand(std::time(nullptr));
    int res = std::rand() % 2;
    if (res) {
        std::cout << _target << " has been successfully robotomized !" << std::endl;
    } else {
        std::cout << "Oups ! The robotomy of " << _target << " failed !" << std::endl;
    }
    return;
}