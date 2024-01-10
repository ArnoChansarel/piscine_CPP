/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:43:39 by achansar          #+#    #+#             */
/*   Updated: 2023/12/27 18:09:33 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "Bureaucrat.hpp"

int main() {

    // Bureaucrat Yves("Yves", 1);
    // Bureaucrat Didier("Didier", 150);

    // try {

    // } catch (std::exception e) {
    //     std::cerr << "Caught exception: " << e.what() << std::endl;
    // }

    // return 0;

    Bureaucrat Sam("Manager Sam", 21);
	std::cout << Sam;
	Bureaucrat Tim("Manager Tim", 42);
	std::cout << Tim;
	Bureaucrat Robert("Boss Robert", 1);
	std::cout << Robert;
	Bureaucrat Emily("Clerk Emily", 150);
	std::cout << Emily << std::endl;

	sleep(1);
	// putString("<<<<<<<<<<<< TEST 1 >>>>>>>>>>>>", C_YELLOW);
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
	// putString("<<<<<<<<<<<< TEST 2 >>>>>>>>>>>>", C_YELLOW);
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

	Bureaucrat David(Emily);
	std::cout << David << std::endl;

	return 0;
}