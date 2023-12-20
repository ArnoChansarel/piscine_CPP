/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:15:37 by achansar          #+#    #+#             */
/*   Updated: 2023/12/19 16:31:52 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    
    public:
        WrongCat(void);
        WrongCat(const WrongCat&);
        WrongCat& operator=(const WrongCat&);
        ~WrongCat(void);
    
        void makeSound() const;
};