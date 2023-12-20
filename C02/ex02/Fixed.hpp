/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:42:12 by achansar          #+#    #+#             */
/*   Updated: 2023/12/18 14:54:50 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	public:
		Fixed();
		Fixed(const int& nb);
		Fixed(const float& nb);
		Fixed (const Fixed&);
		~Fixed(void);
		
		Fixed &operator=(const Fixed& src);
		bool operator==(const Fixed& src) const;
		bool operator!=(const Fixed& src) const;
		bool operator>(const Fixed& src) const;
		bool operator<(const Fixed& src) const;
		bool operator>=(const Fixed& src) const;
		bool operator<=(const Fixed& src) const;
		Fixed operator+(const Fixed& src) const;
		Fixed operator-(const Fixed& src) const;
		Fixed operator*(const Fixed& src) const;
		Fixed operator/(const Fixed& src) const;
		Fixed& operator++(void);
		Fixed operator++(int);
		Fixed& operator--(void);
		Fixed operator--(int);

		int                 getRawBits( void ) const;
		void                setRawBits( int const raw );
		float               toFloat( void ) const;
		int                 toInt( void ) const;
		static Fixed&       min(Fixed& nb1, Fixed& nb2);
		const static Fixed&       min(const Fixed& nb1, const Fixed& nb2);
		static Fixed&       max(Fixed& nb1, Fixed& nb2);
		const static Fixed&       max(const Fixed& nb1, const Fixed& nb2);

	private:
		int                 _value;
		static const int    _fract_bytes = 8;
};

std::ostream& operator<<(std::ostream& src, const Fixed& obj);

#endif
