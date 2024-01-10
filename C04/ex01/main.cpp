/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:10:04 by achansar          #+#    #+#             */
/*   Updated: 2023/12/27 12:31:10 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{

	Animal* array[20];
	for (size_t i = 0; i < 10; i++)
		array[i] = new Cat;
	for (size_t i = 10; i < 20; i++)
		array[i] = new Dog;

    // TEST
    array[8]->makeSound();
    array[13]->makeSound();

    // DELETE
    for (size_t i = 0; i < 20; i++)
		delete array[i];
    
    // DEEP COPY 
    Cat* cat_ori = new Cat();
    cat_ori->thinking(99);

    Cat* cat_cpy = new Cat(*cat_ori);
    delete cat_ori;
    cat_ori = nullptr;
    // cat_ori->thinking(99);//          segfault
    
    cat_cpy->thinking(99);
    delete cat_cpy;
    cat_cpy = nullptr;
    
    // Animal tester;
    system("leaks Animal");
    return 0;
}
