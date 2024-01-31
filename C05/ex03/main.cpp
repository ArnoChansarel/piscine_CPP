/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:43:39 by achansar          #+#    #+#             */
/*   Updated: 2024/01/17 14:08:24 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void putString(std::string str) {
    
    std::cout << str << std::endl;
    return;
}

int main() {
	
	Intern someRandomIntern;
	std::cout << std::endl;
	putString("<<<<<<<<<<<< TEST VALID FORM >>>>>>>>>>>>");

	AForm* rrf;
	try
	{
		rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	AForm* scf;
	try
	{
		scf = someRandomIntern.makeForm("Shrubbery Creation", "Island");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


	Bureaucrat Robert("Boss Robert", 1);
	std::cout << Robert;

	Robert.signForm(*rrf);

	Robert.executeForm(*rrf);

	Robert.signForm(*scf);

	Robert.executeForm(*scf);

	std::cout << std::endl;
	putString("<<<<<<<<<<<< TEST INVALID FORM >>>>>>>>>>>>");

	
	try
	{
		scf = someRandomIntern.makeForm("Contract", "Tim Cook");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}