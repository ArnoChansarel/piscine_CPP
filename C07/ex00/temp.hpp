/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:12:59 by achansar          #+#    #+#             */
/*   Updated: 2024/01/09 19:29:24 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename ele>
void swap(ele& a, ele& b) {
    ele c = a;
    a = b;
    b = c;
}

template <typename ele>
ele min(ele a, ele b) {
    if (b <= a) return b;
    else return a;
}

template <typename ele>
ele max(ele a, ele b) {
    if (a > b) return a;
    else return b;
}
