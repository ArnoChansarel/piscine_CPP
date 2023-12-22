/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:18:18 by achansar          #+#    #+#             */
/*   Updated: 2023/12/22 19:32:46 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
    std::cout << "Dog default constructor called." << std::endl;
    this->_type = "Dog";
    return;
}

Dog::Dog(const Dog& src) {
    std::cout << "Dog copy constructor called." << std::endl;
    *this = src;
    return;
}

Dog& Dog::operator=(const Dog& src) {
    std::cout << "Dog copy assignement called." << std::endl;
    this->_type = src.getType();
    return *this;
}

Dog::~Dog(void) {
    std::cout << "Dog destructor called." << std::endl;
    return;
}

void Dog::makeSound() const {
    std::cout << "The " << getType() << " goes WAF" << std::endl;
    return; 
}