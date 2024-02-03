/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:07:30 by achansar          #+#    #+#             */
/*   Updated: 2024/02/03 17:10:53 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/*
Combination of insertion sort and merge sort

insertion :
de gauch a droite
on check le nombre a gauche jusqu'a trouver plus petit.
une fois la place trouve, on le marque comme trié.

merge :
recursif
divide by 2 the sequence until get separate element in arrays
ensuite trier element tableau par tableau
remonter jusqu'a avoir la sequenc en entier

merge-insertion :
on va diviser la sequence de n elements en k tableaux de taille (n/k)
chaque k array sera sorted via insertion sort
puis on remonte en recursive.

Faut-il chercher la bonne valeur de k ? Ou est-ce inutile ?
*/



int main(int argc, char **argv) {
    
    int array[] = {6, 8, 1, 2, 222, 111, 50, 9, 3, 44, 100};
    std::vector<int> v(array, array + sizeof(array) / sizeof(array[0]));

    PmergeMe a("6, 8, 1, 2, 78, 51, 50, 9, 3, 44");
    a.executeAlgo(v);
    
    PmergeMe::printVec(v);

    return 0;
}
