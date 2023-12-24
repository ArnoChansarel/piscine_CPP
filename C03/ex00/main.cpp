/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:44:28 by achansar          #+#    #+#             */
/*   Updated: 2023/12/23 16:44:13 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    
    ClapTrap Arno("Arno");

    Arno.attack("Jospeh");
    Arno.takeDamage(9);
    Arno.beRepaired(8);

    return 0;
}