/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:07:30 by achansar          #+#    #+#             */
/*   Updated: 2024/04/26 17:17:44 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::string     getInput(int argc, char **argv) {
    
    std::string str;
    
    if (argc != 2) {
        
        for (int i = 1; i < argc; i++) {
            str += argv[i];
            str += " ";
        }
    } else {
        str += argv[1];
    }
    return str;
}

// EN CHANTIER -> MANQUE JACOBSTHAL + LIST CONTAINER + PARSING
// check pour length 3 et moins. a partir de 4, on peut appliquer le insertionSort
// 6 8 1 2 222 111 50 9 3 44 101 100 99
int main(int argc, char **argv) {
    
    if (argc > 2) {
        // int array[] = {6, 8, 1, 2, 222, 111, 50, 9, 3, 44, 100};

        PmergeMe a(getInput(argc, argv));

        try {
            a.parseInput();
            a.execute();
        } catch (std::exception& e) {
            std::cout << e.what() << std::endl;
            return 1;
        }

    } else {
        std::cout << "Error on args." << std::endl;
    }

    return 0;
}
