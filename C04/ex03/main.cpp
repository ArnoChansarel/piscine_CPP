/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:49:53 by achansar          #+#    #+#             */
/*   Updated: 2024/02/14 18:05:33 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "interface/AMateria.hpp"
#include "interface/ICharacter.hpp"
#include "interface/IMateriaSource.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main() {

    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("blackMagic");
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    std::cout << std::endl << "DEEP COPY : " << std::endl;
    Character* deepCopy = new Character("deepCopy");
    Character* deepCopy2 = new Character(*deepCopy);
    tmp = src->createMateria("ice");
    deepCopy->equip(tmp);
    tmp = src->createMateria("cure");
    deepCopy2->equip(tmp);
    std::cout << deepCopy->getName() << " : ";
    deepCopy->use(0, *deepCopy2);
    std::cout << deepCopy2->getName() << " : ";
    deepCopy2->use(0, *deepCopy);

    std::cout << std::endl << "UNEQUIP TEST : " << std::endl;
    me->equip(tmp);
    me->equip(tmp);
    me->equip(tmp);
    me->unequip(1);
    me->equip(tmp);
    
    std::cout << std::endl << "DESTRUCTORS : " << std::endl;
    delete bob;
    delete me;
    delete deepCopy;
    delete deepCopy2;
    delete src;
    // system("leaks Materia");
    return 0;
}
