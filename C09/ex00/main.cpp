/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:56:26 by achansar          #+#    #+#             */
/*   Updated: 2024/01/31 12:37:11 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


/*
parse database

*/


int main(int argc, char **argv) {

    if (argc == 2) {
        try {
            BitcoinExchange db("data.csv");
            db.convertInput(argv[1]);
        } catch (std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    } else {
        std::cout << "Error: could not open file." << std::endl;
        return 1;
    }

    return 0;
}
