/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:06:40 by achansar          #+#    #+#             */
/*   Updated: 2023/12/28 14:35:08 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// =========================================================== CONSTRUCTOR

Form::Form(std::string n, int g1, int g2) : _name(n), _sign(false), _reqGrade_sign(g1), _reqGrade_exec(g2) {
    std::cout << "Form constructor called." << std::endl;
        if (g1 < 1 || g2 < 1) {
            throw Form::GradeTooHighException();
        } else if (g1 > 150 || g2 > 150) {
            throw Form::GradeTooLowException();
        }
    return;
}

Form::Form(const Form& src) : 
        _name(src._name), 
        _sign(src._sign), 
        _reqGrade_sign(src._reqGrade_sign), 
        _reqGrade_exec(src._reqGrade_exec) {
    std::cout << "Form copy constructor called." << std::endl;
    return;
}

Form& Form::operator=(const Form& src) {
    
    if (this != &src) {
        std::cout << "Form copy assignement called." << std::endl;
        _sign = src._sign;
    }
    return *this;
}

Form::~Form() {
    std::cout << "Form destructor called." << std::endl;
    return;
}

// =========================================================== MEMBER FUNCTIONS

void Form::beSigned(const Bureaucrat& b) {
        if (b.getGrade() <= _reqGrade_sign)
            _sign = true;
        else
            throw Form::GradeTooLowException();
    return;
}

// =========================================================== GETTER & SETTER

std::string Form::getName() const {
    return _name;
}

bool Form::getSign() const {
    return _sign;
} 

int Form::getSignGrade() const {
    return _reqGrade_sign;
}

int Form::getExecGrade() const {
    return _reqGrade_exec;
}
        
// =========================================================== OPERATOR OVERLOAD

std::ostream& operator<<(std::ostream& src, const Form& obj) {
    
    src << "Form : " << obj.getName() << std::endl
        << "Signed : " << obj.getSign() << std::endl
        << "Required grade to sign : " << obj.getSignGrade() << std::endl
        << "Required grade to execute : " << obj.getExecGrade() << std::endl;
    return src;
}