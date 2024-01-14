/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:24:11 by achansar          #+#    #+#             */
/*   Updated: 2024/01/14 16:14:13 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;
class Form {
    public:
        Form(std::string n, int g1, int g2);
        Form(const Form&);
        Form& operator=(const Form&);
        ~Form();

        std::string     getName() const;
        bool            getSign() const;
        int             getSignGrade() const;
        int             getExecGrade() const;
        void            beSigned(const Bureaucrat& b);



        class GradeTooHighException : public std::exception {
            const char* what() const throw() {
                return "The grade is too high !";
            }
        };
        
        class GradeTooLowException : public std::exception {
            const char* what() const throw() {
                return "The grade is too low !";
            }
        };
        
    private:
        Form();
        const std::string   _name;
        bool                _sign;
        const int           _reqGrade_sign;
        const int           _reqGrade_exec;  
};

std::ostream& operator<<(std::ostream& src, const Form& obj);