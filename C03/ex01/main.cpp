/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:44:28 by achansar          #+#    #+#             */
/*   Updated: 2023/12/23 17:11:44 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void scavStats(ScavTrap& ele) {
    std::cout   << "Name : " << ele.getName() << std::endl
                << "Hit Points : " << ele.getHitPoint() << std::endl
                << "Energy Points : " << ele.getEnergyPoint() << std::endl
                << "--------------" << std::endl;
    return;
}

int main(void) {
    
    ClapTrap Arno("Arno");

    Arno.attack("Jospeh");
    Arno.takeDamage(9);
    Arno.beRepaired(8);
    
    ScavTrap Baptiste("Baptiste");
    scavStats(Baptiste);
    Baptiste.attack("Salomon");
    Baptiste.guardGate();
    return 0;
}