/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 21:28:14 by achansar          #+#    #+#             */
/*   Updated: 2023/12/24 17:34:04 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
    
    public:
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap&);
        ~DiamondTrap();
        DiamondTrap& operator=(const DiamondTrap&);

        void whoAmI() const;

    private:
        std::string     _name;
};