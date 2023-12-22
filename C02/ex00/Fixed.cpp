/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:20:50 by achansar          #+#    #+#             */
/*   Updated: 2023/12/22 15:33:58 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ===================================================================== CONSTRUCTORS

Fixed::Fixed( void ) : _value(0) {
    std::cout << "Default constructor called." << std::endl;
    return;
}

Fixed::Fixed( const Fixed& src) {
    std::cout << "Copy constructor called." << std::endl;
    *this = src;
    return;
}

Fixed &Fixed::operator=(const Fixed& src) {
    
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src) {
        this->_value = src.getRawBits();
    }
    return *this;
}

Fixed::~Fixed( void ) {
    std::cout << "Desructor called." << std::endl;
    return;
}

// ===================================================================== MEMBERS FUNCTIONS

int                 Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return _value;    
}


void                Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBits member function called" << std::endl;
    _value = raw;
    return;
}