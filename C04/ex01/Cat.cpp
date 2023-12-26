/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:09:30 by achansar          #+#    #+#             */
/*   Updated: 2023/12/19 18:34:42 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
    std::cout << "Cat default constructor called." << std::endl;
    this->_type = "Cat";
    this->brain = new Brain(); 
    return;
}

Cat::Cat(const Cat& src) {
    std::cout << "Cat copy constructor called." << std::endl;
    *this = src;
    return;
}

Cat& Cat::operator=(const Cat& src) {
    if (this != &src) {
        std::cout << "Cat copy assignement called." << std::endl;
        this->_type = src.getType();
    }
    return *this;
}

Cat::~Cat(void) {
    std::cout << "Cat destructor called." << std::endl;
    delete this->brain;
    return;
}

void Cat::makeSound() const {
    std::cout << "The " << getType() << " goes MEOW" << std::endl;
    return; 
}