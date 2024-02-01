/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:04:07 by achansar          #+#    #+#             */
/*   Updated: 2024/02/01 18:50:27 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

class RPN {
    
    public:
        RPN(std::string input);
        RPN(const RPN& src);
        RPN& operator=(const RPN& src);
        ~RPN();
    
        void checkInput(std::string input);
        void readRPN();

        void addRPN();
        void subRPN();
        void multRPN();
        void divRPN();

        class InvalidInputException : public std::exception {
            
            const char* what() const throw() {
                return "Error: Program only takes operands and operators as input.";
            }
        };

    private:
        RPN();
        std::stack<int>     _stck;
        std::string         _input;
};
