/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:52:54 by achansar          #+#    #+#             */
/*   Updated: 2024/01/12 15:15:52 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// ========================================================== CONSTRUCTORS

Span::Span() : _N(0) {
	return;
}

Span::Span(unsigned int N) : _N(N) {
	return;
}

Span::Span(const Span& src) {
	*this = src;
	return;
}

Span& Span::operator=(const Span& src) {
	_N = src._N;
	_vector = src._vector;
	return *this;
}

Span::~Span() {
	return;
}

// ========================================================== MEMBER FUNCTIONS

void Span::addNumber(int nb) {

	if (_vector.size() < _N) {
		_vector.push_back(nb);
	} else {
		throw VectorFullException();
	}
	return;
}

void Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end) {
	
	if (std::distance(start, end) <= _N - _vector.size()) {
		_vector.insert(_vector.end(), start, end);
	} else {
		throw std::length_error("Error: range too wide.");
	}
	return;
}

unsigned int Span::longestSpan() const {

	if (_vector.size() >= 2) {
		return (*std::max_element(_vector.begin(), _vector.end()) - *std::min_element(_vector.begin(), _vector.end()));
	} else {
		throw EmptyVectorException();
	}
}

unsigned int Span::shortestSpan() const {

	if (_vector.size() >= 2) {
		Span tmp(*this);	
		std::vector<int> spans(_vector.size());

		std::sort(tmp._vector.begin(), tmp._vector.end());
		std::adjacent_difference(tmp._vector.begin(), tmp._vector.end(), spans.begin());
		// std::cout << "In spans : ";
		// 	for (std::vector<int>::const_iterator i = spans.begin(); i != spans.end(); i++) {
		// 	std::cout << *i << " "; 
		// }
		// std::cout << std::endl << std::endl;
		
		return *std::min_element(spans.begin(), spans.end());
	} else {
		throw EmptyVectorException();
	}
}

void Span::printSpan() const {
	
	for (std::vector<int>::const_iterator i = _vector.begin(); i != _vector.end(); i++) {
		std::cout << *i << " "; 
	}
	std::cout << std::endl;
}
