/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:18:00 by achansar          #+#    #+#             */
/*   Updated: 2023/12/20 11:45:58 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    
    public:
        Dog(void);
        Dog(const Dog&);
        Dog& operator=(const Dog&);
        ~Dog(void);
    
        void makeSound() const;
        std::string getBrainIdea(int i) const;

    private:
        Brain* brain;
};