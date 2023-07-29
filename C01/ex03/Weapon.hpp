/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:08:21 by achansar          #+#    #+#             */
/*   Updated: 2023/07/25 18:33:54 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
#include <iostream>

class Weapon {
    
    public:
        Weapon( std::string type );
        ~Weapon( void );

        const std::string getType( void ) const;
        void setType( std::string newType );

    private:
        std::string type;
    
};

#endif
