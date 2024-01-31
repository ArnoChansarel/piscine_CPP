/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:41:12 by achansar          #+#    #+#             */
/*   Updated: 2024/01/15 14:35:53 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// =========================================================== CONSTRUCTOR

Intern::Intern() {
    return;
}

Intern::Intern(const Intern&) {
    return;
}

Intern& Intern::operator=(const Intern& src) {
    
    if (this != &src) {
       
    }
    return *this;
}

Intern::~Intern() {
    return;
}

// =========================================================== MEMBER FUNCTION

AForm* Intern::makeP(std::string n, std::string t) {
    std::cout << "Intern creates Presiential Pardon Form." << std::endl;
    return new PresidentialPardonForm(n, t);
}

AForm* Intern::makeR(std::string n, std::string t) {
    std::cout << "Intern creates Robotomy Request Form." << std::endl;
    return new RobotomyRequestForm(n, t);
}

AForm* Intern::makeS(std::string n, std::string t) {
    std::cout << "Intern creates Shruberry Creation Form." << std::endl;
    return new ShrubberyCreationForm(n, t);
}

AForm* Intern::makeForm(std::string name, std::string target) {
    
    std::string validTypes[3] = {"Presidential Pardon", "Robotomy Request", "Shrubbery Creation"};    
    AForm *(Intern::*make[3])(std::string name, std::string target) = {&Intern::makeP, &Intern::makeR, &Intern::makeS};

    for (int i = 0; i < 3; i++) {
        if (name == validTypes[i])
            return (this->*make[i])(name, target);
    }
    throw InvalidFormNameException();
}
