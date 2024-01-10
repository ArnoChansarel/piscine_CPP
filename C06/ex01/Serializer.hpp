/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:35:10 by achansar          #+#    #+#             */
/*   Updated: 2024/01/09 16:51:36 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Data.hpp"

class Serializer {
    
    public:
        Serializer(const Serializer& src);
        Serializer& operator=(const Serializer& src);
        ~Serializer();
    
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
    
    private:
        Serializer();
};