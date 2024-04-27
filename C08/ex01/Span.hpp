/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:49:30 by achansar          #+#    #+#             */
/*   Updated: 2024/03/12 17:52:07 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

class Span {

    public:
        Span(unsigned int N);
        Span(const Span& src);
        Span& operator=(const Span& src);
        ~Span();
        
        void addNumber(int nb);
        void addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);
        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;

        void printSpan() const;

        class VectorFullException : public std::exception {
            const char* what() const throw() {
                return "The Span collector is full !";
            }
        };

        class EmptyVectorException : public std::exception {
            const char* what() const throw() {
                return "Not enough elements in vector to find a span.";
            }
        };

    private:
        Span();
        unsigned int        _N;
        std::vector<int>    _vector;
};
