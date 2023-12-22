/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:47:31 by achansar          #+#    #+#             */
/*   Updated: 2023/12/22 16:47:40 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "interface/AMateria.hpp"

class Cure : public AMateria {

    public:
        Cure();
        Cure(const Cure&);
        Cure& operator=(const Cure&);
        ~Cure();

        Cure* clone() const;
        void use(ICharacter& target);


    private:
    
};