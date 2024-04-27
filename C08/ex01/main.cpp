/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:53:21 by achansar          #+#    #+#             */
/*   Updated: 2024/03/12 17:52:14 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// struct randomNumber {
//     int operator()() const {
//         return std::rand() % 101;
//     }
// };

void fillVectorWithRandomNumbers(std::vector<int>& vec) {
    srand(static_cast<unsigned int>(time(NULL)));

    std::cout << "Trying to add the following range : ";
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        *it = rand() % 100;
        std::cout << *it << " ";
    }
    std::cout << "\n";
}


void putString(std::string str) {
    
    std::cout << str << std::endl;
    return;
}

void subjectTest() {
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return ;
}

int main() {

    putString("SUBJECT TEST :");
    subjectTest();    
    srand(time(NULL));

    Span a(20);

    a.addNumber(std::rand() % 101);
    
    putString("\nMY TESTS :\n\n  NOT ENOUGH ELEMENT TEST");
    try {
        std::cout << a.longestSpan() << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout << a.shortestSpan() << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    putString("\n  FILLING VECTOR");
    try {
        for (int i = 1; i < 10; ++i) {
            a.addNumber(std::rand() % 101);
        }
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    
    a.printSpan();

    putString("\n  ADDING RANGE ITERATOR");
    
    std::vector<int> rng(10);
    // std::generate(rng.begin(), rng.end(), randomNumber());
    fillVectorWithRandomNumbers(rng);

    try {
        a.addRange(rng.begin(), rng.end());
        std::cout << "Success !!" << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        a.addRange(rng.begin(), rng.end());
        std::cout << "Success !!" << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    a.printSpan();

    putString("\n  BEYOND N TEST");
    try {
        a.addNumber(98);
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    putString("\n  SPAN TESTS");
    std::cout << "Longest Span is " << a.longestSpan() << std::endl;
    std::cout << "Shortest Span is " << a.shortestSpan() << std::endl;


    return 0;
}
