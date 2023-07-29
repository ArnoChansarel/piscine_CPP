/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:22:36 by achansar          #+#    #+#             */
/*   Updated: 2023/07/29 17:25:59 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ( void ) {
    
    Zombie arno("Arno");
    arno.randomChump("Jacques");
    Zombie *joseph = arno.newZombie("Joseph");
    if (!joseph)
        return EXIT_FAILURE;
    joseph->announce();
    
    delete joseph;
    // system("leaks zombie");
    return 0;
}
