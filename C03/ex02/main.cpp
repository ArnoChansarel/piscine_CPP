/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:44:28 by achansar          #+#    #+#             */
/*   Updated: 2023/08/11 20:26:17 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    
    ClapTrap Arno("Arno");
    ScavTrap Baptiste("Baptiste");
    FragTrap Judas("Judas");

    Arno.attack("Jospeh");
    Baptiste.attack("Salomon");
    Judas.attack("Jesus");
    

    Arno.takeDamage(9);
    Baptiste.guardGate();
    Judas.takeDamage(80);
    Arno.beRepaired(8);
    Judas.highFiveGuys();
    return 0;
}
