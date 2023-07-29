/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:42:43 by achansar          #+#    #+#             */
/*   Updated: 2023/07/25 18:50:10 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

HumanA::HumanA ( std::string p1, Weapon& p2 ) : name(p1) {
    this->weapon = &p2;
    return;
}

HumanA::~HumanA ( void ) {
    return;
}

void HumanA::attack ( void ) const {
    
    std::cout   << this->name << " attacks with their "
                << this->weapon->getType() << std::endl; 
    return;
}
