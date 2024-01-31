/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:43:39 by achansar          #+#    #+#             */
/*   Updated: 2024/01/16 19:26:18 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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

	sleep(1);
	putString("<<<<<<<<<<<< TEST 1 >>>>>>>>>>>>");
	std::cout << "Try to increment Boss's grade: " << std::endl;
	sleep(2);
	Robert.upgrade();
	sleep(1);
	std::cout << Robert;
	std::cout << std::endl << "Try to decrement Clerk's grade: " << std::endl;
	sleep(2);
	Emily.downgrade();
	sleep(1);
	std::cout << Emily << std::endl;

	sleep(1);
	putString("<<<<<<<<<<<< TEST 2 >>>>>>>>>>>>");
	std::cout << "Try to create a bureaucrat with invalid grade:" << std::endl;
	
	sleep(2);
	
	try {
		Bureaucrat Zero("Zero", 0);
		std::cout << Zero;
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	sleep(2);
	
	try {
		Bureaucrat Million("Million", 1000000);
		std::cout << Million;
	} catch(const std::exception& e) {
	    std::cerr << e.what() << std::endl;
	}

	std::cout << "Try to create a bureaucrat with copy constructor:" << std::endl;
	Bureaucrat David(Emily);
	std::cout << David << std::endl;

	return 0;
}