/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:08:46 by achansar          #+#    #+#             */
/*   Updated: 2023/07/25 18:30:52 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB ( std::string p1 ) : name(p1) {
    this->weapon = NULL;
    return;
}

HumanB::~HumanB ( void ) {
    return;
}

void HumanB::attack ( void ) const {
    
    std::cout   << this->name << " attacks with their "
                << this->weapon->getType() << std::endl; 
    return;
}

void HumanB::setWeapon( Weapon& new_weapon ) {
    
    this->weapon = &new_weapon;
    return;
}
