/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:16:20 by achansar          #+#    #+#             */
/*   Updated: 2023/07/29 16:50:59 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
    
    Harl harl;

    if (argc != 2) {
        std::cout << "Invalid number of arguments." << std::endl;
        return 1;
    }
    
    harl.complain(argv[1]);
    return 0;
}
