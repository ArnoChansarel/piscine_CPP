/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:31:57 by achansar          #+#    #+#             */
/*   Updated: 2024/01/09 19:52:10 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void iter(T* a, int length, void func(T &elem)) {
    for (int i = 0; i < length; i++) {
        func(a[i]);
    }
    return;
}

template <typename T>
void print_array(T* a, size_t l) {
    for (int i = 0; i < l; i++) {
        std::cout << a[i] << std::endl;
    }
}

//                         A VIRER/remplacer
template <typename T>
void	inc(T &elem)
{
	elem++;
}

template <typename T>
void	multiply21(T &elem)
{
	elem *= 21;
}
