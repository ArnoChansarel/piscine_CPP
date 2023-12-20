/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:15:13 by achansar          #+#    #+#             */
/*   Updated: 2023/12/19 16:15:18 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
    std::cout << "WrongCat default constructor called." << std::endl;
    this->_type = "WrongCat";
    return;
}

WrongCat::WrongCat(const WrongCat& src) {
    std::cout << "WrongCat copy constructor called." << std::endl;
    *this = src;
    return;
}

WrongCat& WrongCat::operator=(const WrongCat& src) {
    std::cout << "WrongCat copy assignement called." << std::endl;
    this->_type = src.getType();
    return *this;
}

WrongCat::~WrongCat(void) {
    std::cout << "WrongCat destructor called." << std::endl;
    return;
}

void WrongCat::makeSound() const {
    std::cout << "The " << getType() << " goes MEOW" << std::endl;
    return; 
}