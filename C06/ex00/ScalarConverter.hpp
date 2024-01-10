/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 20:16:57 by achansar          #+#    #+#             */
/*   Updated: 2023/12/30 14:22:11 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ScalarConverter {
    public:
        static void convert(std::string nb);
        ScalarConverter(const ScalarConverter& src);
        ScalarConverter& operator=(const ScalarConverter& src);
        ~ScalarConverter();

        class NonDisplayableException : public std::exception {
            public:
                const char* what() const throw() {
                    return "non displayable";
                }    
        };

        class ImpossibleConversionException : public std::exception {
            public:
                const char* what() const throw() {
                    return "impossible";
                }    
        };

        class WrongTypeException : public std::exception {
            public:
                const char* what() const throw() {
                    return "Wrong input. Accepted inputs are [int] [float] [double] [char]";
                }    
        };
        
    private:
        ScalarConverter();
};
