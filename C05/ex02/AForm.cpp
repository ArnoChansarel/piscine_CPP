/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:06:40 by achansar          #+#    #+#             */
/*   Updated: 2024/02/07 10:03:41 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// =========================================================== CONSTRUCTOR

AForm::AForm(std::string n, int g1, int g2) : _name(n), _sign(false), _reqGrade_sign(g1), _reqGrade_exec(g2) {
    // std::cout << "AForm constructor called." << std::endl;
        if (g1 < 1 || g2 < 1) {
            throw AForm::GradeTooHighException();
        } else if (g1 > 150 || g2 > 150) {
            throw AForm::GradeTooLowException();
        }
    return;
}

AForm::AForm(const AForm& src) : 
        _name(src._name),
        _reqGrade_sign(src._reqGrade_sign), 
        _reqGrade_exec(src._reqGrade_exec) {
    // std::cout << "AForm copy constructor called." << std::endl;
    *this = src;
    return;
}

AForm& AForm::operator=(const AForm& src) {
    
    if (this != &src) {
        // std::cout << "AForm copy assignement called." << std::endl;
        _sign = src._sign;
    }
    return *this;
}

AForm::~AForm() {
    // std::cout << "AForm destructor called." << std::endl;
    return;
}

// =========================================================== MEMBER FUNCTIONS

void AForm::beSigned(const Bureaucrat& b) {
        if (b.getGrade() <= _reqGrade_sign)
            if (_sign)
                throw AForm::FormAlreadySignedException();
            else
                _sign = true;
        else
            throw AForm::GradeTooLowException();
    return;
}

void AForm::execute(Bureaucrat const & executor) const {
        if (_sign) {
            if (executor.getGrade() <= _reqGrade_exec) {
                action();
            } else {
                throw AForm::GradeTooLowException();
            }
        } else {
            throw AForm::FormNotSignedException();
        } 
    return;
}

// =========================================================== GETTER & SETTER

std::string AForm::getName() const {
    return _name;
}

bool AForm::getSign() const {
    return _sign;
} 

int AForm::getSignGrade() const {
    return _reqGrade_sign;
}

int AForm::getExecGrade() const {
    return _reqGrade_exec;
}
        
// =========================================================== OPERATOR OVERLOAD

std::ostream& operator<<(std::ostream& src, const AForm& obj) {
    
    src << "AForm : " << obj.getName() << std::endl
        << "Signed : " << obj.getSign() << std::endl
        << "Required grade to sign : " << obj.getSignGrade() << std::endl
        << "Required grade to execute : " << obj.getExecGrade() << std::endl;
    return src;
}