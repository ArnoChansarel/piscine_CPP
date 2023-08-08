/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:20:50 by achansar          #+#    #+#             */
/*   Updated: 2023/08/08 12:11:16 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ============================================================================ CONSTRCUTORS

Fixed::Fixed( void ) : _value(0) {
    std::cout << "Default constructor called." << std::endl;
    return;
}

Fixed::Fixed(const int nb) : _value(0) {
    std::cout << "Int constructor called." << std::endl;

    int scale = 1 << this->_fract_bytes;// shifting 1 to the left to build the scale
    this->_value = nb * scale;//           multiply by scale will shift everything to create an int
    return;
}

Fixed::Fixed(const float nb) {
    std::cout << "Float constructor called." << std::endl;
    
    float scale = 1 << _fract_bytes;
    float rounded = nb >= 0 ? 0.5 : -0.5;
    this->_value = (int)(nb * scale + rounded);
    return;
}

Fixed::Fixed( const Fixed& src) {
    std::cout << "Copy constructor called." << std::endl;
    *this = src;
    return;
}

Fixed::~Fixed( void ) {
    std::cout << "Desructor called." << std::endl;
    return;
}

// ================================================================================= OPERATOR OVERLOADS

Fixed &Fixed::operator=(const Fixed& src) {
    
    std::cout << "Copy assignment operator called" << std::endl;
    this->_value = src.getRawBits();
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