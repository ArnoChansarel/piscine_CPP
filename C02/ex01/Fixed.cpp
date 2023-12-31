/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:20:50 by achansar          #+#    #+#             */
/*   Updated: 2023/12/23 14:08:27 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ============================================================================ CONSTRCUTORS

Fixed::Fixed( void ) : _value(0) {
    std::cout << "Default constructor called." << std::endl;
    return;
}

Fixed::Fixed(const int nb) : _value(nb << _fract_bytes) {
    std::cout << "Int constructor called." << std::endl;
    return;
}

Fixed::Fixed(const float nb) : _value(0) {
    std::cout << "Float constructor called." << std::endl;
    
    float scale = 1 << _fract_bytes;
    float rounded = nb >= 0 ? 0.5 : -0.5;
    this->_value = (int)(nb * scale + rounded);
    return;
}

Fixed::Fixed( const Fixed& src) : _value(src.getRawBits()) {
    std::cout << "Copy constructor called." << std::endl;
    return;
}

Fixed::~Fixed( void ) {
    std::cout << "Destructor called." << std::endl;
    return;
}

// ================================================================================= OPERATOR OVERLOADS

Fixed &Fixed::operator=(const Fixed& src) {
    
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src) {
        this->_value = src.getRawBits();
    }
    return *this;
}

std::ostream& operator<<(std::ostream& src, const Fixed& obj) {
    src << obj.toFloat();
    return src;
}

// ===================================================================================== MEMBER FUNCTIONS

int                 Fixed::getRawBits( void ) const {
    return _value;    
}

void                Fixed::setRawBits( int const raw ) {
    _value = raw;
    return;
}

float               Fixed::toFloat( void ) const {
   return (float)this->_value / (float)(1 << this->_fract_bytes);
}

int                 Fixed::toInt( void ) const {
    return this->_value / (1 << this->_fract_bytes);
}