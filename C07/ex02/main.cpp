/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:16:38 by achansar          #+#    #+#             */
/*   Updated: 2024/01/16 19:13:15 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

void putString(std::string str) {
    
    std::cout << str << std::endl;
    return;
}

int main(void) {

    Array<int> a(6);
    
    putString("\nINT TEST");
    std::cout << "Array size is : " << a.size()  << std::endl;

    std::cout << "Init int array : ";
    for (int i = 0; i < 6; i++) {
        a[i] = i+1;
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    
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

    std::cout << "Array became : ";
    for (int i = 0; i < 6; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

// ====================================================================================== //

    putString("\nCHAR TEST");
    Array<char> b(6);
    std::cout << "Array size is : " << b.size()  << std::endl;

    std::cout << "Init int array : ";
    for (int i = 0; i < 6; i++) {
        b[i] = i + 65;
        std::cout << b[i] << " ";
    }
    std::cout << std::endl;

    try {
        b[2] = 42;
    } catch (std::exception& e) {
        std::cout << "Exception caught : " << e.what() << std::endl;
    }

    try {
        b[3] = 'A';
    } catch (std::exception& e) {
        std::cout << "Exception caught : " << e.what() << std::endl;
    }

    try {
        b[6] = 'A';
    } catch (std::exception& e) {
        std::cout << "Exception caught : " << e.what() << std::endl;
    }

    std::cout << "Array became : ";
    for (int i = 0; i < 6; i++) {
        std::cout << b[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
