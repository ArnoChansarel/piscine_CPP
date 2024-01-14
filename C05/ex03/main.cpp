/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:43:39 by achansar          #+#    #+#             */
/*   Updated: 2024/01/14 16:52:02 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
	
	Intern someRandomIntern;
	std::cout << std::endl;
	std::cout << "<<<<<<<<<<<< TEST VALID FORM >>>>>>>>>>>>" << std::endl;
	sleep(1);
	AForm* rrf;
	try
	{
		rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	sleep(1);
	AForm* scf;
	try
	{
		scf = someRandomIntern.makeForm("Shrubbery Creation", "Island");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	sleep(1);

	Bureaucrat Robert("Boss Robert", 1);
	std::cout << Robert;
	sleep(1);
	Robert.signForm(*rrf);
	sleep(1);
	Robert.executeForm(*rrf);
	sleep(1);
	Robert.signForm(*scf);
	sleep(1);
	Robert.executeForm(*scf);
	sleep(1);
	std::cout << std::endl;
	std::cerr << "<<<<<<<<<<<< TEST INVALID FORM >>>>>>>>>>>>" << std::endl;
	sleep(1);
	
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