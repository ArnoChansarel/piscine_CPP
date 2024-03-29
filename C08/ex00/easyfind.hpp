/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:23:45 by achansar          #+#    #+#             */
/*   Updated: 2024/01/11 14:31:11 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <list>

class NotFoundException : public std::exception {
    const char* what() const throw() {
        return "Element not found in container.";
    }
};

template <typename T>
typename T::iterator easyfind(T& a, int b) {
    
    typename T::iterator found;
    
    found = std::find(a.begin(), a.end(), b);// why is a.end() different than the last element ?
    if (found == a.end())//                     because end() has a special value that indicate iterator went after last item
        throw NotFoundException();
    return found;
}
