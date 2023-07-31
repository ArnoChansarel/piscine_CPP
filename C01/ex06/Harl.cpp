/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:22:06 by achansar          #+#    #+#             */
/*   Updated: 2023/07/31 19:09:05 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {
    return;
}

Harl::~Harl( void ) {
    return;
}

void Harl::complain( std::string level ) {

    std::string level_array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++) {
        if (level_array[i] == level) {
            switch (i) {
                case 0:
                    (this->debug)();
                case 1:
                    (this->info)();
                case 2:
                    (this->warning)();
                default:
                    (this->error)();
            };
            return;
        }
    }
    std::cout << "Level does not exist." << std::endl;
    return;
}
