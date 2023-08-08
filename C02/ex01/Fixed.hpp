/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:42:12 by achansar          #+#    #+#             */
/*   Updated: 2023/08/08 12:11:22 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

    public:
        Fixed();
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed (const Fixed&);
        ~Fixed(void);
        Fixed &operator=(const Fixed& src);

        int                 getRawBits( void ) const;
        void                setRawBits( int const raw );
        float               toFloat( void ) const;
        int                 toInt( void ) const;

    private:
        int                 _value;
        static const int    _fract_bytes = 8;
};

std::ostream& operator<<(std::ostream& src, const Fixed& obj);

#endif
