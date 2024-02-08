/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:25:27 by achansar          #+#    #+#             */
/*   Updated: 2024/02/08 18:03:28 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base* generate(void) {
    int  nb = rand() % 3;
    switch(nb) {
        case 0: return new A; break;
        case 1: return new B; break;
        case 2: return new C; break;
        default: return nullptr;
    }
}

void identify_ptr(Base* p) {
    A* a = dynamic_cast<A*>(p);
    if (a != nullptr) {
        std::cout << "A" << std::endl;
    }
    B* b = dynamic_cast<B*>(p);
    if (b != nullptr) {
        std::cout << "B" << std::endl;
    }
    C* c = dynamic_cast<C*>(p);
    if (c != nullptr) {
        std::cout << "C" << std::endl;
    }
}

void identify_ref(Base& p) {
    std::string type = typeid(p).name();
    std::cout << type[1] << std::endl;
    return;
}

int main() {
    
    std::srand(std::time(nullptr));
    Base* n1 = generate();
    identify_ptr(n1);
    identify_ref(*n1);
    delete n1;
    return 0;
}