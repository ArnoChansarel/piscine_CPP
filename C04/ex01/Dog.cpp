/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:18:18 by achansar          #+#    #+#             */
/*   Updated: 2023/12/27 12:46:57 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// =========================================================== CONSTRUCTOR

Dog::Dog(void) {
    std::cout << "Dog default constructor called." << std::endl;
    this->_type = "Dog";
    this->brain = new Brain(); 
    return;
}

Dog::Dog(const Dog& src) {
    std::cout << "Dog copy constructor called." << std::endl;
    *this = src;
    return;
}

Dog& Dog::operator=(const Dog& src) {
    if (this != &src) {
        std::cout << "Dog copy assignement called." << std::endl;
        _type = src._type;
        brain = new Brain(*src.brain);
    }
    return *this;
}

Dog::~Dog(void) {
    std::cout << "Dog destructor called." << std::endl;
    delete this->brain;
    return;
}

// =========================================================== MEMBER FUNCTIONS

void Dog::makeSound() const {
        std::cout << "The " << _type << " goes WAF" << std::endl;
    return; 
}

void Dog::thinking(int i) const {
    return brain->IThinkOf(i);
}
