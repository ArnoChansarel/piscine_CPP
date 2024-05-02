/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:01:53 by achansar          #+#    #+#             */
/*   Updated: 2024/04/30 16:21:17 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv) {
    
    if (argc == 2) {
        RPN a(argv[1]);
        a.readRPN();
    } else {
        std::cout << "Error" << std::endl;
    }
    return 0;
}