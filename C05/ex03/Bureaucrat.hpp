/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:43:39 by achansar          #+#    #+#             */
/*   Updated: 2024/01/14 16:46:37 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>

class AForm;
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
        void signForm(AForm& src);
        void executeForm(AForm const & form);

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
