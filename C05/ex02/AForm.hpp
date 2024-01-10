/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:24:11 by achansar          #+#    #+#             */
/*   Updated: 2023/12/28 17:33:39 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;
class AForm {
    public:
        AForm(std::string n, int g1, int g2);
        AForm(const AForm&);
        AForm& operator=(const AForm&);
        ~AForm();

        std::string     getName() const;
        bool            getSign() const;
        int             getSignGrade() const;
        int             getExecGrade() const;
        void            beSigned(const Bureaucrat& b);
        virtual void    action() const = 0;
        void            execute(Bureaucrat const & executor) const;

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

        class FormNotSignedException : public std::exception {
            const char* what() const throw() {
                return "The form isn't signed yet !";
            }
        };

        class FormAlreadySignedException : public std::exception {
            const char* what() const throw() {
                return "The form is already signed !";
            }
        };
        
    private:
        const std::string   _name;
        bool                _sign;
        const int           _reqGrade_sign;
        const int           _reqGrade_exec;  
};

std::ostream& operator<<(std::ostream& src, const AForm& obj);