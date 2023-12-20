/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:01:42 by achansar          #+#    #+#             */
/*   Updated: 2023/12/20 11:37:08 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain(void) {
    std::cout << "Brain default constructor called." << std::endl;
    for (int i = 0; i < 100; i++) {
        std::stringstream str;
        str << i+1;
        _ideas[i] = str.str();
    }
    
    return;
}

Brain::Brain(const Brain& src) {
    std::cout << "Brain copy constructor called." << std::endl;
    *this = src;
    return;
}

Brain& Brain::operator=(const Brain& src) {
    std::cout << "Brain assignement operator called." << std::endl;
    for (int i = 0; i < 100; i++) {
        this->_ideas[i] = src.getIdeas(i);
    }
    return *this;
}

Brain::~Brain(void) {
    std::cout << "Brain default destructor called." << std::endl;
    return;
}

std::string Brain::getIdeas(int i) const {
    return _ideas[i];
}
