/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:18:22 by achansar          #+#    #+#             */
/*   Updated: 2023/07/28 19:52:00 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ( void ) {
    return;
}

Zombie::~Zombie ( void ) {
    return;
}

void Zombie::announce( void ) {
    
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}