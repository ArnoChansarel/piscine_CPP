/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:50:59 by achansar          #+#    #+#             */
/*   Updated: 2024/01/11 14:37:29 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
    
    // Initialize vector iterator
    int array[] = {1, 2, 3, 4, 5};
    int arr_end = sizeof(array) / sizeof(array[0]);
    
    // TWO WAYS TO INITIALIZE A VECTOR
    std::vector<int> vector(array, array + arr_end);// This
    // std::vector<int> vector(42, 100);//             Or this

    std::vector<int>::iterator vecit;
    
    // Tests
    std::cout << std::endl << "VECTOR" << std::endl;
    try {
        vecit = easyfind(vector, 2);
        std::cout << "Value " << *vecit << " found." << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try{
        vecit = easyfind(vector, 55);
        std::cout << "Value " << *vecit << " found." << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    
    try {
        vecit = easyfind(vector, 1);
        std::cout << "Value " << *vecit << " found." << std::endl;

    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    
    try {
        vecit = easyfind(vector, 0);
        std::cout << "Value " << *vecit << " found." << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    // Initialize list iterator
    std::list<int> list(array, array + arr_end);
    std::list<int>::iterator listit;

    // Tests
    std::cout << std::endl << "LIST" << std::endl;
    try {
        listit = easyfind(list, 2);
        std::cout << "Value " << *listit << " found." << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try{
        listit = easyfind(list, 55);
        std::cout << "Value " << *listit << " found." << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    
    try {
        listit = easyfind(list, 1);
        std::cout << "Value " << *listit << " found." << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    
    try {
        listit = easyfind(list, 5);
        std::cout << "Value " << *listit << " found." << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
