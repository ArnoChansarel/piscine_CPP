/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:42:12 by achansar          #+#    #+#             */
/*   Updated: 2023/12/23 12:35:46 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

    public:
        Fixed(void);
        Fixed (const Fixed&);
        ~Fixed(void);
        Fixed &operator=(const Fixed& src);

        int                 getRawBits( void ) const;
        void                setRawBits( int const raw );

    private:
        int                 _value;
        static const int    _fract_bytes = 8;
};

#endif
