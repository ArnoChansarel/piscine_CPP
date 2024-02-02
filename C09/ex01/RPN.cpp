/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:03:47 by achansar          #+#    #+#             */
/*   Updated: 2024/02/02 18:05:32 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

//======================================================================= CONSTRUCTORS

RPN::RPN() {
    return;
}

RPN::RPN(std::string input) {
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

void RPN::addRPN() {
    if (_stck.size() < 2) {
        throw ImpossibleRPNException();
    }

    int B = _stck.top();
    _stck.pop();
    int A = _stck.top();
    _stck.pop();

    _stck.push(A + B);
    return;
}

void RPN::subRPN() {
    if (_stck.size() < 2) {
        throw ImpossibleRPNException();
    }
    
    int B = _stck.top();
    _stck.pop();
    int A = _stck.top();
    _stck.pop();

    _stck.push(A - B);
    return;
}

void RPN::multRPN() {
    if (_stck.size() < 2) {
        throw ImpossibleRPNException();
    }
    
    int B = _stck.top();
    _stck.pop();
    int A = _stck.top();
    _stck.pop();

    _stck.push(A * B);
    return;  
}

void RPN::divRPN() {

    if (_stck.size() < 2) {
        throw ImpossibleRPNException();
    }

    int B = _stck.top();
    _stck.pop();
    int A = _stck.top();
    _stck.pop();

    if (B == 0)
        throw ZeroDivisionException();

    _stck.push(A / B);
    return;
}

void RPN::readRPN() {
    
    std::string v;
    char operators[4] = {'+', '-', '*', '/'};    
    void (RPN::*operations[4])() = {&RPN::addRPN, &RPN::subRPN, &RPN::multRPN, &RPN::divRPN};
    
    try {
        for (std::string::iterator it = _input.begin(); *it != '\0'; it++) {//     apparently there's no '\0' usally. why here ?
            while (std::isspace(*it)) {
                it++;
            }
            if (isdigit(*it)) {
                while (isdigit(*it)) {
                    v += *it;
                    it++;
                }
                _stck.push(std::stoi(v));
                v.clear();
            } else {
                char* opIt = std::find(std::begin(operators), std::end(operators), *it);
                if (opIt != std::end(operators)) {
                    (this->*operations[std::distance(std::begin(operators), opIt)])();
                } else {
                    std::cout << "Error" << std::endl;
                    return;
                }
            }
        }
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
        return;
    }
    if (_stck.size() > 1)
        std::cout << "Error: The provided computation chain is impossible." << std::endl;
    else
        std::cout << _stck.top() << std::endl;
    return;
}
