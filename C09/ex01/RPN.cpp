/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:03:47 by achansar          #+#    #+#             */
/*   Updated: 2024/02/01 18:51:25 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

//======================================================================= CONSTRUCTORS

RPN::RPN() {
    return;
}

RPN::RPN(std::string input) {
    checkInput(input);
    _input = input;
    return;
}

RPN::RPN(const RPN& src) {
    *this = src;
    return;
}

RPN& RPN::operator=(const RPN& src) {
    _stck = src._stck;
    _input = src._input;
    return *this;
}

RPN::~RPN() {
    return;
}

//======================================================================= MEMBER FUNCTIONS

void RPN::checkInput(std::string input) {//   PAS SUR DE DEVOIR L'UTILISER MAIS C'EST LA
    
    for (std::string::iterator it = input.begin(); it != input.end(); it++) {
        if (std::distance(input.begin(), it) % 2) {
            if (*it != ' ')
                std::cout << "not good" << std::endl;
        } else {
            if (!isdigit(*it) && *it != '+' && *it != '-' && *it != '*' && *it != '/')
                std::cout << "not good2" << std::endl;
        }
    }
    return;
}

void RPN::addRPN() {
    return;
}

void RPN::subRPN() {
    return;
}

void RPN::multRPN() {
    return;  
}

void RPN::divRPN() {
    return;
}

void RPN::readRPN() {
    
    char operators[4] = {'+', '-', '*', '/'};    
    void (RPN::*operations[4])() = {&RPN::addRPN, &RPN::subRPN, &RPN::multRPN, &RPN::divRPN};
    
    for (std::string::iterator it = _input.begin(); it != _input.end(); it++) {
        while (std::isspace(*it)) {
            it++;
        }
        
    }
    
    return;
}
