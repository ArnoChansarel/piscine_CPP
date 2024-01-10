/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 20:14:40 by achansar          #+#    #+#             */
/*   Updated: 2024/01/09 13:37:12 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
    
    if (argc != 2) {
        return 1;
    }
    
    // ScalarConverter titus; -> Impossible to instanciate

    try {
        ScalarConverter::convert(argv[1]);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
