/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:13:14 by achansar          #+#    #+#             */
/*   Updated: 2023/12/27 12:28:46 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal {

    public:
        Animal(void);
        Animal(const Animal&);
        Animal& operator=(const Animal&);
        virtual ~Animal(void);
    
        std::string getType() const;
        virtual void makeSound() const;

    protected:
        std::string _type;
};
