/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:43:39 by achansar          #+#    #+#             */
/*   Updated: 2024/02/07 09:58:10 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include <iostream>

class Form;
class Bureaucrat {
    
    public:
        Bureaucrat(std::string n, int g);
        Bureaucrat(const Bureaucrat&);
        Bureaucrat& operator=(const Bureaucrat&);
        ~Bureaucrat();

        void upgrade();
        void downgrade();

        std::string getName() const;
        int getGrade() const;
        void signForm(Form& src);

        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw() {
                    return "The grade is too high !";
                }
        };

        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw() {
                    return "The grade is too low !";
                }
        };

    private:
        Bureaucrat();
        const std::string   _name;
        int                 _grade;
};

std::ostream& operator<<(std::ostream& src, const Bureaucrat& obj);
