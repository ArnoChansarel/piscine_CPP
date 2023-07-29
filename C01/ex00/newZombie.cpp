/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:32:29 by achansar          #+#    #+#             */
/*   Updated: 2023/07/28 20:05:46 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::newZombie( std::string name ) {

    Zombie* z;
    try {
        z = new Zombie( name );
    } catch (const std::bad_alloc& z) {
        std::cout << "Alloc vie new() failed." << std::endl;
        return (nullptr);
    }
    return z;
}
