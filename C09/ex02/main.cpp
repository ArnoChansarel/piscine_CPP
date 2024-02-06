/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:07:30 by achansar          #+#    #+#             */
/*   Updated: 2024/02/06 14:43:55 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


// EN CHANTIER -> MANQUE JACOBSTHAL + LIST CONTAINER + PARSING + HANDLING ARGS&STRING INPUT
int main(int argc, char **argv) {
    
    int array[] = {6, 8, 1, 2, 222, 111, 50, 9, 3, 44, 100};
    // int array[] = {3, 5, 9, 7, 100, 4, 1};

    std::vector<int> v(array, array + sizeof(array) / sizeof(array[0]));

    PmergeMe a("6, 8, 1, 2, 78, 51, 50, 9, 3, 44");
    a.executeAlgo(v);
    
    PmergeMe::printVec(v);

    return 0;
}
