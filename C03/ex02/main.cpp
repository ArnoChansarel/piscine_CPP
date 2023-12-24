/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:44:28 by achansar          #+#    #+#             */
/*   Updated: 2023/12/23 17:16:34 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void scavStats(ScavTrap& ele) {
    std::cout   << "Name : " << ele.getName() << std::endl
                << "Hit Points : " << ele.getHitPoint() << std::endl
                << "Energy Points : " << ele.getEnergyPoint() << std::endl
                << "--------------" << std::endl;
    return;
}

void fragStats(FragTrap& ele) {
    std::cout   << "Name : " << ele.getName() << std::endl
                << "Hit Points : " << ele.getHitPoint() << std::endl
                << "Energy Points : " << ele.getEnergyPoint() << std::endl
                << "--------------" << std::endl;
    return;
}

int main(void) {
    
    ClapTrap Arno("Arno");
    ScavTrap Baptiste("Baptiste");
    FragTrap Judas("Judas");

    scavStats(Baptiste);
    fragStats(Judas);

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
