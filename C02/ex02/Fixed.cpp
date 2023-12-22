/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:20:50 by achansar          #+#    #+#             */
/*   Updated: 2023/12/22 15:35:20 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ============================================================================ CONSTRCUTORS

Fixed::Fixed( void ) : _value(0) {
    return;
}

Fixed::Fixed(const int& nb) : _value(0) {

    int scale = 1 << this->_fract_bytes;
    this->_value = nb * scale;
    return;
}

Fixed::Fixed(const float& nb) {
    
    float scale = 1 << _fract_bytes;
    float rounded = nb >= 0 ? 0.5 : -0.5;
    this->_value = (int)(nb * scale + rounded);
    return;
}

Fixed::Fixed( const Fixed& src) {
    *this = src;
    return;
}

Fixed::~Fixed( void ) {
    return;
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


// ================================================================================= OPERATOR OVERLOADS
// ==================================================================== COMPARATORS
Fixed &Fixed::operator=(const Fixed& src) {

    if (this != &src) {
        this->_value = src.getRawBits();
    }
    return *this;
}

std::ostream& operator<<(std::ostream& src, const Fixed& obj) {
    
    src << obj.toFloat();
    return src;
}

bool Fixed::operator==(const Fixed& src) const {
    return (this->_value == src._value ? true : false);
}

bool Fixed::operator!=(const Fixed& src) const {
    return (this->_value != src._value ? true : false);
}

bool Fixed::operator>(const Fixed& src) const {
    return (this->_value > src._value ? true : false);
}

bool Fixed::operator<(const Fixed& src) const {
    return (this->_value < src._value ? true : false);
}

bool Fixed::operator>=(const Fixed& src) const {
    return (this->_value >= src._value ? true : false);
}

bool Fixed::operator<=(const Fixed& src) const {
    return (this->_value <= src._value ? true : false);
}

// ==================================================================== MATH

Fixed Fixed::operator+(const Fixed& src) const {
    
    Fixed tmp;
    
    tmp._value = this->_value + src._value;
    return tmp;
}

Fixed Fixed::operator-(const Fixed& src) const {
    
    Fixed tmp;
    
    tmp._value = this->_value - src._value;
    return tmp;
}

Fixed Fixed::operator*(const Fixed& src) const {
    
    Fixed tmp;
    
    tmp._value = this->_value * src._value >> this->_fract_bytes;
    return tmp;
}

Fixed Fixed::operator/(const Fixed& src) const {
    
    Fixed tmp;
    
    tmp._value = (this->_value << this->_fract_bytes) / src._value; 
    return tmp;
}

// ==================================================================== INCREMENT

Fixed& Fixed::operator++(void) {
    
    ++this->_value;
    return *this;
}
        
Fixed Fixed::operator++(int) {
    
    Fixed tmp(*this);
    
    this->_value++;
    return tmp;
}

Fixed& Fixed::operator--(void) {
    
    --this->_value;
    return *this;
}

Fixed Fixed::operator--(int) {
    
    Fixed tmp(*this);
    
    this->_value--;
    return tmp;
}

// ================================================================================= MIN & MAX

Fixed&       Fixed::min(Fixed& nb1, Fixed& nb2) {
    return (nb1 < nb2 ? nb1 : nb2);
}

const Fixed&       Fixed::min(const Fixed& nb1, const Fixed& nb2) {
    return (nb1 < nb2 ? nb1 : nb2);
}
        
Fixed&       Fixed::max(Fixed& nb1, Fixed& nb2) {
    return (nb1 > nb2 ? nb1 : nb2);
}

const Fixed&      Fixed::max(const Fixed& nb1, const Fixed& nb2) {
    return (nb1 > nb2 ? nb1 : nb2);
}