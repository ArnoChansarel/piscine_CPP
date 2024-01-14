/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:53:21 by achansar          #+#    #+#             */
/*   Updated: 2024/01/12 15:35:12 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


struct randomNumber {
    int operator()() const {
        return std::rand() % 101;
    }
};

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
    
    putString("\nMY TESTS :\n  NOT ENOUGH ELEMENT TEST");
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

    putString("  FILLING VECTOR");
    try {
        for (int i = 1; i < 10; ++i) {
            a.addNumber(std::rand() % 101);
        }
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    
    a.printSpan();

    putString("  ADDING RANGE ITERATOR");
    
    std::vector<int> rng(10);
    std::generate(rng.begin(), rng.end(), randomNumber());

    try {
        a.addRange(rng.begin(), rng.end());
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        a.addRange(rng.begin(), rng.end());
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    a.printSpan();
    

    putString("  BEYOND N TEST");
    try {
        a.addNumber(98);
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    putString("  SPAN TESTS");
    std::cout << "Longest Span is " << a.longestSpan() << std::endl;
    std::cout << "Shortest Span is " << a.shortestSpan() << std::endl;

    return 0;
}
