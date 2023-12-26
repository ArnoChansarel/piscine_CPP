/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:39:37 by achansar          #+#    #+#             */
/*   Updated: 2023/12/26 15:46:57 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// =========================================================== CONSTRUCTOR

Bureaucrat::Bureaucrat() {
    std::cout << "Bureaucrat default constructor called." << std::endl;
    return;
}

Bureaucrat::Bureaucrat(std::string n, int g) : _name(n) {
    std::cout << "Bureaucrat constructor called." << std::endl;
    if (g < 1) {
        throw Bureaucrat::GradeTooHighException();
    } else if (g > 150) {
        throw Bureaucrat::GradeTooLowException();
    } else {
        _grade = g;
    }
    return;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) {
    std::cout << "Bureaucrat copy constructor called." << std::endl;
    *this = src;
    return;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src) {
    
    if (this != &src) {
        std::cout << "Bureaucrat copy assignement called." << std::endl;
        // _name = src.getName();
        _grade = src._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat destructor called." << std::endl;
    return;
}

// =========================================================== MEMBER FUNCTIONS



void Bureaucrat::upgrade() {
    if (_grade > 1 && _grade <= 150) {
        _grade--;
    } else {
        throw Bureaucrat::GradeTooHighException();
    }
    return;
}

void Bureaucrat::downgrade() {
    if (_grade >= 1 && _grade < 150) {
        _grade++;
    } else {
        throw Bureaucrat::GradeTooLowException();
    }
    return;
}

std::string Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

std::ostream& operator<<(std::ostream& src, const Bureaucrat& obj) {
    
    src << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
    return src;
}
