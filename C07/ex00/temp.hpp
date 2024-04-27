/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:12:59 by achansar          #+#    #+#             */
/*   Updated: 2024/02/19 12:02:12 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void swap(T& a, T& b) {
    T c = a;
    a = b;
    b = c;
}

template <typename T>
T min(T a, T b) {
    if (b <= a) return b;
    else return a;
}

template <typename T>
T max(T a, T b) {
    if (a > b) return a;
    else return b;
}
