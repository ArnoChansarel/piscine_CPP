/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:16:00 by achansar          #+#    #+#             */
/*   Updated: 2023/12/19 17:15:08 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
    std::cout << "Animal default constructor called." << std::endl;
    this->_type = "None";
    return;
}

Animal::Animal(const Animal& src) {
    std::cout << "Animal copy constructor called." << std::endl;
    *this = src;
    return;
}

Animal& Animal::operator=(const Animal& src) {
    std::cout << "Animal copy assignement called." << std::endl;
    this->_type = src.getType();
    return *this;
}

Animal::~Animal(void) {
    std::cout << "Animal default destructor called." << std::endl;
    return;
}

std::string Animal::getType() const {
    return _type;
}

void Animal::makeSound() const {
    std::cout << "The " << getType() << " goes BLANK" << std::endl;
    return; 
}