/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:40:17 by achansar          #+#    #+#             */
/*   Updated: 2024/01/14 15:57:33 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <deque>
#include <stack>

template <typename T, typename P = std::deque<T> >// explicit the default underlying container
class MutantStack : public std::stack<T, P> {

    public:
        MutantStack() {};
        MutantStack(const MutantStack& src) { *this = src;}
        MutantStack& operator=(const MutantStack& src) {
            
            std::stack<T, P>::operator=(src);// inherit the std::stack '=' operator
            return *this;
        }
        ~MutantStack() {};

        typedef typename P::iterator iterator;
        typedef typename P::const_iterator const_iterator;

        iterator begin() { return this->c.begin();}// c stands for access to undelrying container
        iterator end() { return this->c.end();}
        const_iterator begin() const { return this->c.begin();}
        const_iterator end() const { return this->c.end();}
};
