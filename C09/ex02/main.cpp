/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:07:30 by achansar          #+#    #+#             */
/*   Updated: 2024/02/06 16:28:53 by achansar         ###   ########.fr       */
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

// EN CHANTIER -> MANQUE JACOBSTHAL + LIST CONTAINER + PARSING + HANDLING ARGS&STRING INPUT
int main(int argc, char **argv) {
    
    if (argc > 1) {
        int array[] = {6, 8, 1, 2, 222, 111, 50, 9, 3, 44, 100};
        // int array[] = {3, 5, 9, 7, 100, 4, 1};

        std::vector<int> v(array, array + sizeof(array) / sizeof(array[0]));

        PmergeMe a(getInput(argc, argv));
        a.executeAlgo(v);

    } else {
        std::cout << "Error on args." << std::endl;
    }

    return 0;
}
