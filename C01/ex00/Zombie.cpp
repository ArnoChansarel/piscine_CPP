/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:18:22 by achansar          #+#    #+#             */
/*   Updated: 2023/07/31 17:54:04 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ( std::string name ) : name(name) {
    
    this->name = name;
    this->announce();
    return;
}

Zombie::~Zombie ( void ) {
    std::cout << this->name << " has been destroyed." << std::endl;
    return;
}

void Zombie::announce( void ) {
    
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}