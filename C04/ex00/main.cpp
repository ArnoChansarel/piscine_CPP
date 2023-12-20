/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:10:04 by achansar          #+#    #+#             */
/*   Updated: 2023/12/19 18:12:02 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << "Dog type : " << j->getType() << " " << std::endl;
    std::cout << "Cat type : " << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    
    delete i;
    delete j;
    delete meta;

    // Other tests
    std::cout << "--------------" << std::endl;
    
    const WrongAnimal* metaW = new WrongAnimal();
    const WrongAnimal* w = new WrongCat();
    
    std::cout << "WrongAnimal type : " << metaW->getType() << " " << std::endl;
    std::cout << "WrongCat type : " << w->getType() << " " << std::endl;
    w->makeSound();
    metaW->makeSound();
    
    delete w;
    delete metaW;
    system("leaks Animal");
    return 0;
}