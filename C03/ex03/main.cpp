/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:44:28 by achansar          #+#    #+#             */
/*   Updated: 2023/12/26 14:12:53 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void diamondStats(DiamondTrap& ele) {
    std::cout   << "Hit Points : " << ele.getHitPoint() << std::endl
                << "Energy Points : " << ele.getEnergyPoint() << std::endl
                << "Attack Damage : " << ele.getDamage() << std::endl
                << "--------------" << std::endl;
    return;
}

void scavStats(ScavTrap& ele) {
    std::cout   << "Name : " << ele.getName() << std::endl
                << "Hit Points : " << ele.getHitPoint() << std::endl
                << "Energy Points : " << ele.getEnergyPoint() << std::endl
                << "Attack Damage : " << ele.getDamage() << std::endl
                << "--------------" << std::endl;
    return;
}

void fragStats(FragTrap& ele) {
    std::cout   << "Name : " << ele.getName() << std::endl
                << "Hit Points : " << ele.getHitPoint() << std::endl
                << "Energy Points : " << ele.getEnergyPoint() << std::endl
                << "Attack Damage : " << ele.getDamage() << std::endl
                << "--------------" << std::endl;
    return;
}

int main(void) {
    
    ClapTrap Arno("Arno");
    ScavTrap Baptiste("Baptiste_ScavTrap");
    FragTrap Judas("Judas_FragTrap");

    DiamondTrap Belzebuth("Belzebuth");

    Belzebuth.whoAmI();
    diamondStats(Belzebuth);

    scavStats(Baptiste);
    fragStats(Judas);

    std::cout << std::endl;

	Belzebuth.attack("Judas_FragTrap");

	std::cout << std::endl;

	Belzebuth.takeDamage(50);
	Belzebuth.beRepaired(10);

	std::cout << std::endl;
    return 0;
}
