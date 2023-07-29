/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:12:44 by achansar          #+#    #+#             */
/*   Updated: 2023/07/25 18:35:02 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon ( std::string str ) : type(str) {
    return;
}

Weapon::~Weapon ( void ) {
    return;
}

const std::string Weapon::getType( void ) const {
    
    const std::string typeRef = this->type; 
    return typeRef;
}

void Weapon::setType( std::string newType ) {

    this->type = newType;
    return;
}