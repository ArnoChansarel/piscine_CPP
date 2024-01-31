/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:14:21 by achansar          #+#    #+#             */
/*   Updated: 2024/01/16 17:23:50 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <typeinfo>

void	putString(const std::string &str, std::string color);

class Base {
    public:
        virtual ~Base() {};
};

class A: public Base {};
class B: public Base {};
class C: public Base {};
