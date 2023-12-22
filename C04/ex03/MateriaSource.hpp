/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:47:15 by achansar          #+#    #+#             */
/*   Updated: 2023/12/22 16:34:30 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "interface/AMateria.hpp"
#include "interface/IMateriaSource.hpp"

class AMateria;
class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(const MateriaSource&);
        MateriaSource& operator=(const MateriaSource&);
        ~MateriaSource();
        
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);

    private:
        AMateria* _memory[4];
};