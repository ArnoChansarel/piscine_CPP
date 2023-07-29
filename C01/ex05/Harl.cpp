/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:22:06 by achansar          #+#    #+#             */
/*   Updated: 2023/07/28 19:46:41 by achansar         ###   ########.fr       */
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
    void (Harl::*funcArray[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++) {
        if (level_array[i] == level) {
            (this->*funcArray[i])();
            return;
        }
    }
    std::cout << "Level does not exist." << std::endl;
    return;
}
