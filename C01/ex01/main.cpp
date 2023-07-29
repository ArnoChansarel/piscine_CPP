/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:22:36 by achansar          #+#    #+#             */
/*   Updated: 2023/07/28 20:08:09 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ( void ) {
    
    int nb = 10;
    Zombie* horde = Zombie::zombieHorde(nb, "Anis");
    if (!horde)
        return EXIT_FAILURE;
    
    for (int i = 0; i < nb; i++) 
        horde[i].announce();

    delete[] horde;
    return 0;
}
