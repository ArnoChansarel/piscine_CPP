/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:06:24 by achansar          #+#    #+#             */
/*   Updated: 2023/07/25 18:28:19 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H
#include "Weapon.hpp"

class HumanB {
    
    public:
        HumanB( std::string name);
        ~HumanB( void );
        
        void attack( void ) const;
        void setWeapon( Weapon& new_weapon );

    private:
        std::string name;
        Weapon* weapon;
};

#endif
