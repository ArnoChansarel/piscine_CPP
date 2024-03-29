/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:31:36 by achansar          #+#    #+#             */
/*   Updated: 2024/01/16 18:09:01 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
    
	std::cout << "<<<<<<  TEST INT  >>>>>>" << std::endl;
	{
		std::cout << "init int array: " << std::endl;
		int array[] = { 0, 1, 2, 3, 4, 5};
		print_array(array, 6);
		std::cout << "increment result: " << std::endl;
		iter(array, 6, increment);
		print_array(array, 6);
		std::cout << "multiply result: " << std::endl;
		iter(array, 6, multiply);
		print_array(array, 6);
	}

	std::cout << "<<<<<<  TEST FLOAT  >>>>>>" << std::endl;
	{
		std::cout << "init float array: " << std::endl;
		float array [] = {1.1, 2.2, 3.3};
		print_array(array, 3);
		std::cout << "increment result: " << std::endl;
		iter(array, 3, increment);
		print_array(array, 3);
		std::cout << "multiply result: " << std::endl;
		iter(array, 3, multiply);
		print_array(array, 3);
	}

	std::cout << "<<<<<<  TEST CHAR  >>>>>>" << std::endl;
	{
		std::cout << "init char array: " << std::endl;
		char array [] = {'A', 'B', 'C'};
		print_array(array, 3);
		std::cout << "increment result: " << std::endl;
		iter(array, 3, increment);
		print_array(array, 3);
		std::cout << "multiply result: " << std::endl;
		iter(array, 3, multiply);
		print_array(array, 3);
	}
    return 0;
}
