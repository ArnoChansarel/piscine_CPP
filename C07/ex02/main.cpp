/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:16:38 by achansar          #+#    #+#             */
/*   Updated: 2024/02/19 13:27:58 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void putString(std::string str) {
    
    std::cout << str << std::endl;
    return;
}

int main(void) {

    // int * a = new int(); 
    // std::cout << *a << std::endl;

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

    std::cout << "Init char array : ";
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
    

// ====================================================================================== //

    putString("\nCOPY TEST");

    Array<char> c(6);
    c = b;
        std::cout << "Copy array : ";
    for (int i = 0; i < 6; i++) {
        std::cout << b[i] << " ";
    }
    std::cout << std::endl;

    try {
        b[1] = 'X';
    } catch (std::exception& e) {
        std::cout << "Exception caught : " << e.what() << std::endl;
    }


    std::cout << "Array b became : ";
    for (int i = 0; i < 6; i++) {
        std::cout << b[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "And copy array is still : ";
    for (int i = 0; i < 6; i++) {
        std::cout << c[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
