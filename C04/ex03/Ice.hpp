/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:37:03 by achansar          #+#    #+#             */
/*   Updated: 2023/12/22 15:45:03 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "interface/AMateria.hpp"

class Ice : public AMateria {

    public:
        Ice();
        Ice(const Ice&);
        Ice& operator=(const Ice&);
        ~Ice();

        Ice* clone() const;
        void use(ICharacter& target);


    private:
    
};