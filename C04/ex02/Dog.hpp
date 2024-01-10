/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:18:00 by achansar          #+#    #+#             */
/*   Updated: 2023/12/27 12:47:37 by achansar         ###   ########.fr       */
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
        void thinking(int i) const;

    protected:
        Brain* brain;
};
