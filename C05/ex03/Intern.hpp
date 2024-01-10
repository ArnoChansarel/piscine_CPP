/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:40:54 by achansar          #+#    #+#             */
/*   Updated: 2023/12/28 19:31:06 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
    public:
        Intern();
        Intern(const Intern&);
        Intern& operator=(const Intern&);
        ~Intern();
    
        AForm* makeForm(std::string name, std::string target);
        AForm* makeP(std::string n, std::string t);
        AForm* makeR(std::string n, std::string t);
        AForm* makeS(std::string n, std::string t);

    class InvalidFormNameException : public std::exception {
        const char* what() const throw() {
            return "Form name is invalid.";
        }
    };
};
