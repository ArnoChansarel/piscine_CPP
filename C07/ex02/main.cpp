/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:16:38 by achansar          #+#    #+#             */
/*   Updated: 2024/01/10 16:19:52 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void) {

    Array<int> a(6);
    std::cout << "size = " << a.size()  << std::endl;
    
    std::cout << std::endl << "INT TEST" << std::endl;
    try {
        a[2] = 8;
    } catch (std::exception& e) {
        std::cout << "Exception caught : " << e.what() << std::endl;
    }
    
    try {
        a[80] = 9;
    } catch (std::exception& e) {
        std::cout << "Exception caught : " << e.what() << std::endl;
    }

    std::cout << std::endl << "CHAR TEST" << std::endl;
    Array<char> b(6);
    try {
        b[2] = 42;
    } catch (std::exception& e) {
        std::cout << "Exception caught : " << e.what() << std::endl;
    }
    
    try {
        a[3] = 'A';
    } catch (std::exception& e) {
        std::cout << "Exception caught : " << e.what() << std::endl;
    }
    try {
        a[6] = 'A';
    } catch (std::exception& e) {
        std::cout << "Exception caught : " << e.what() << std::endl;
    }
    return 0;
}
