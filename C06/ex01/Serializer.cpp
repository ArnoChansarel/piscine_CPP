/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:38:36 by achansar          #+#    #+#             */
/*   Updated: 2024/02/09 13:17:28 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// ========================================================== CONSTRUCTORS

Serializer::Serializer(){
    return;
}

Serializer::Serializer(const Serializer& src) {
    *this = src;
    return;
}

Serializer& Serializer::operator=(const Serializer& src) {
    return *this;
}

Serializer::~Serializer() {
    return;
}

// ========================================================== MEMBER FUNCTION
    
uintptr_t Serializer::serialize(Data* ptr) {
    uintptr_t rtr = reinterpret_cast<uintptr_t>(ptr);
    return rtr;
}
    
Data* Serializer::deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}
