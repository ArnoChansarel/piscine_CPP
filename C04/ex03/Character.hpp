/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:25:54 by achansar          #+#    #+#             */
/*   Updated: 2024/02/14 18:07:41 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "interface/ICharacter.hpp"

class Character : public ICharacter {
    
    public:
        Character(std::string name);
        Character(const Character&);
        Character& operator=(const Character&);
        ~Character();

        
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        
    private:
        std::string _name;
        AMateria* _inventory[4];
};