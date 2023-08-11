/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 20:13:53 by achansar          #+#    #+#             */
/*   Updated: 2023/08/11 20:15:58 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap(std::string name);
        FragTrap(const FragTrap&);
        ~FragTrap();
        FragTrap& operator=(const FragTrap&);

        void attack(const std::string& target);
        void highFiveGuys();
};
