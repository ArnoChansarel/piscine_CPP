/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:43:39 by achansar          #+#    #+#             */
/*   Updated: 2023/12/28 17:38:31 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {

	Bureaucrat Sam("Manager Sam", 21);
	std::cout << Sam;
	Bureaucrat Tim("Manager Tim", 42);
	std::cout << Tim;
	Bureaucrat Robert("Boss Robert", 1);
	std::cout << Robert;
	Bureaucrat Emily("Clerk Emily", 150);
	std::cout << Emily << std::endl;

	sleep(1);
	std::cout << "<<<<<<<<<<<< TEST 1 >>>>>>>>>>>>" << std::endl;
	std::cout << "Try to increment Boss's grade: " << std::endl;
	sleep(1);
	Robert.upgrade();
	sleep(1);
	std::cout << Robert;
	std::cout << std::endl << "Try to decrement Clerk's grade: " << std::endl;
	sleep(1);
	Emily.downgrade();
	sleep(1);
	std::cout << Emily << std::endl;

	sleep(1);
	std::cout << "<<<<<<<<<<<< TEST 2 >>>>>>>>>>>>" << std::endl;
	std::cout << "Try to create a bureaucrat with invalid grade:" << std::endl;
	sleep(1);
	try
	{
		Bureaucrat Zero("Zero", 0);
		std::cout << Zero;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	sleep(1);
		try
	{
		Bureaucrat Million("Million", 1000000);
		std::cout << Million;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	sleep(1);
	std::cout << "<<<<<<<<<<<< TEST 3 >>>>>>>>>>>>" << std::endl;
	sleep(1);
	std::cout << "Create a few concrete forms:" << std::endl;
	ShrubberyCreationForm palm("Paradise");
	std::cout << palm;
	sleep(1);
	RobotomyRequestForm robo("David");
	std::cout << robo;
	sleep(1);
	PresidentialPardonForm pardon("Mike");
	std::cout << pardon;
	sleep(1);
	std::cout << "<<<<<<<<<<<< TEST 4 >>>>>>>>>>>>" << std::endl;
	sleep(1);
	std::cout << "Clerk is trying to sign the form ..." << std::endl;
	Emily.signForm(palm);
	sleep(1);
	std::cout << "Boss is trying to sign the form ..." << std::endl;
	Robert.signForm(palm);
	sleep(1);
	std::cout << "Boss is trying to sign the form again ..." << std::endl;
	Robert.signForm(palm);
	std::cout << "Manager is trying to sign the form ..." << std::endl;
	Tim.signForm(robo);
	sleep(1);
	std::cout << "<<<<<<<<<<<< TEST 5 >>>>>>>>>>>>" << std::endl;
	sleep(1);
	std::cout << "Clerk is trying to execute the form ..." << std::endl;
	Emily.executeForm(palm);
	sleep(1);
	std::cout << "Manager is trying to execute the form ..." << std::endl;
	Tim.executeForm(palm);
	sleep(1);
	std::cout << "Boss is trying to execute the form ..." << std::endl;
	Robert.executeForm(pardon);
	sleep(1);
	std::cout << "Manager is trying to sign the form ..." << std::endl;
	Sam.signForm(pardon);
	sleep(1);
	std::cout << "Boss is trying to execute the form ..." << std::endl;
	Robert.executeForm(pardon);
	sleep(1);
	std::cout << "Boss is trying to execute the form ..." << std::endl;
	Robert.executeForm(robo);
	sleep(1);
	return 0;
}