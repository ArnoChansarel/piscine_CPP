/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:04:18 by achansar          #+#    #+#             */
/*   Updated: 2023/07/28 20:07:56 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name ) {

    Zombie* z;

    try {
        z = new Zombie[N];
    } catch (const std::bad_alloc& z) {
        std::cout << "Memory Allocation with new() failed." << std::endl;
        return (nullptr);
    }
    for (int i = 0 ; i <  N ; i++) {
        z[i] = Zombie();
        z[i].name = name;
    }

    return z;
}
