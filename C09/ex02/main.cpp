/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:07:30 by achansar          #+#    #+#             */
/*   Updated: 2024/02/02 17:50:59 by achansar         ###   ########.fr       */
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
    
    
    
    return 0;
}