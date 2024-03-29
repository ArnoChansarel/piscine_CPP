/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:43:39 by achansar          #+#    #+#             */
/*   Updated: 2024/01/17 14:07:55 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "Form.hpp"
#include "Bureaucrat.hpp"

void putString(std::string str) {
    
    std::cout << str << std::endl;
    return;
}

int main() {
	Bureaucrat Sam("Manager Sam", 21);
	std::cout << Sam;
	Bureaucrat Tim("Manager Tim", 42);
	std::cout << Tim;
	Bureaucrat Robert("Boss Robert", 1);
	std::cout << Robert;
	Bureaucrat Emily("Clerk Emily", 150);
	std::cout << Emily << std::endl;


	putString("<<<<<<<<<<<< TEST 1 >>>>>>>>>>>>");
	std::cout << "Try to increment Boss's grade: " << std::endl;

	Robert.upgrade();

	std::cout << Robert;
	std::cout << std::endl << "Try to decrement Clerk's grade: " << std::endl;

	Emily.downgrade();

	std::cout << Emily << std::endl;


	putString("<<<<<<<<<<<< TEST 2 >>>>>>>>>>>>");
	std::cout << "Try to create a bureaucrat with invalid grade:" << std::endl;

	try
	{
		Bureaucrat Zero("Zero", 0);
		std::cout << Zero;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

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

	putString("<<<<<<<<<<<< TEST 3 >>>>>>>>>>>>");

	std::cout << "Create a valid form: " << std::endl;
	Form contract("Labor Contract", 20, 1);
	std::cout << contract;

	std::cout << "Try to create an invalid form: " << std::endl;
	try
	{
		Form fail1("Document", 9999, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Try to create an invalid form: " << std::endl;
	try
	{
		Form fail2("Document", 42, -555);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	putString("<<<<<<<<<<<< TEST 4 >>>>>>>>>>>>");

	std::cout << "Clerk is trying to sign the form ..." << std::endl;
	Emily.signForm(contract);

	std::cout << "Boss is trying to sign the form ..." << std::endl;
	Robert.signForm(contract);

	std::cout << "Boss is trying to sign the form again ..." << std::endl;
	Robert.signForm(contract);
	return 0;
}