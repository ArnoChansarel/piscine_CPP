/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:08:22 by achansar          #+#    #+#             */
/*   Updated: 2023/12/22 12:45:24 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
    protected:
        std::string _type;
        
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria&);
        AMateria& operator=(const AMateria&);
        virtual ~AMateria();
        
        std::string const & getType() const;
        
        virtual AMateria* clone() const = 0;
        
        virtual void use(ICharacter& target);
};
