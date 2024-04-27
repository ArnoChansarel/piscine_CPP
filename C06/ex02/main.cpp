/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:25:27 by achansar          #+#    #+#             */
/*   Updated: 2024/02/12 16:43:41 by achansar         ###   ########.fr       */
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

void identify(Base* p) {
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

void identify(Base& p) {

    try {
        A& a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    } catch (std::exception& e) {}
    
    try {
        B& b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    } catch (std::exception& e) {}

    try {
        C& c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    } catch (std::exception& e) {}
    
    return;
}

int main() {
    
    std::srand(std::time(nullptr));
    Base* n1 = generate();
    identify(n1);
    identify(*n1);
    delete n1;
    return 0;
}