/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:35:50 by achansar          #+#    #+#             */
/*   Updated: 2023/07/25 18:48:03 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
#include "Weapon.hpp"

class HumanA {//                                        reference sur weapon
    
    public:
        HumanA( std::string name, Weapon& weapon);
        ~HumanA( void );
    
        void attack( void ) const;

    private:
        std::string name;
        Weapon* weapon;
};

#endif
