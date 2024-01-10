/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:07:24 by achansar          #+#    #+#             */
/*   Updated: 2023/12/27 12:46:35 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    
    public:
        Cat(void);
        Cat(const Cat&);
        Cat& operator=(const Cat&);
        ~Cat(void);
    
        void makeSound() const;
        void thinking(int i) const;
        
    protected:
        Brain* brain;
};