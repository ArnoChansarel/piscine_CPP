/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:13:31 by achansar          #+#    #+#             */
/*   Updated: 2023/12/19 16:13:40 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
    std::cout << "WrongAnimal default constructor called." << std::endl;
    this->_type = "None";
    return;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) {
    std::cout << "WrongAnimal copy constructor called." << std::endl;
    *this = src;
    return;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src) {
    std::cout << "WrongAnimal copy assignement called." << std::endl;
    this->_type = src.getType();
    return *this;
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "WrongAnimal default destructor called." << std::endl;
    return;
}

std::string WrongAnimal::getType() const {
    return _type;
}

void WrongAnimal::makeSound() const {
    std::cout << "The " << getType() << " goes BLANK" << std::endl;
    return; 
}