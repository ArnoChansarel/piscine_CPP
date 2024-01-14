/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:39:37 by achansar          #+#    #+#             */
/*   Updated: 2024/01/14 16:16:47 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// =========================================================== CONSTRUCTOR

Bureaucrat::Bureaucrat(std::string n, int g) : _name(n) {
    // std::cout << "Bureaucrat constructor called." << std::endl;
        if (g < 1) {
            throw Bureaucrat::GradeTooHighException();
        } else if (g > 150) {
            throw Bureaucrat::GradeTooLowException();
        } else {
            _grade = g;
        }
    return;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : _name(src._name), _grade(src._grade) {
    // std::cout << "Bureaucrat copy constructor called." << std::endl;
    return;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src) {
    
    if (this != &src) {
        // std::cout << "Bureaucrat copy assignement called." << std::endl;
        _grade = src._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {
    // std::cout << "Bureaucrat destructor called." << std::endl;
    return;
}

// =========================================================== MEMBER FUNCTIONS

void Bureaucrat::upgrade() {
    try {
        if (_grade > 1 && _grade <= 150) {
            _grade--;
        } else {
            throw Bureaucrat::GradeTooHighException();
        }
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return;
}

void Bureaucrat::downgrade() {
    try {
        if (_grade >= 1 && _grade < 150) {
            _grade++;
        } else {
            throw Bureaucrat::GradeTooLowException();
        }
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return;
}

void Bureaucrat::signForm(AForm& src) {
    try {
        src.beSigned(*this);
        std::cout << *this << " signs " << src.getName() << std::endl;
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return;
}

void Bureaucrat::executeForm(AForm const & form) {
    try {
        form.execute(*this);
        std::cout << *this << " executed " << form.getName() << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return;
}

// =========================================================== GETTER & SETTER

std::string Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}


// =========================================================== OPERATOR OVERLOAD

std::ostream& operator<<(std::ostream& src, const Bureaucrat& obj) {
    
    src << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
    return src;
}
