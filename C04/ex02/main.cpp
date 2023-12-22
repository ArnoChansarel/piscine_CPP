/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:10:04 by achansar          #+#    #+#             */
/*   Updated: 2023/12/20 14:05:58 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal* array[4];

    for (int i = 0; i < 4; i++) {
        array[i] = new Cat();
        array[i+1] = new Dog();
        i++;
    }
    
    // TEST

    array[1]->makeSound();
    array[2]->makeSound();

    // DELETE

    for (int i = 0; i < 4; i++) {
        delete array[i];
    }

    // Animal tester;
    
    system("leaks Animal");
    return 0;
}
