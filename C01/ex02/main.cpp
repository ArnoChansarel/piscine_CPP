/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:43:32 by achansar          #+#    #+#             */
/*   Updated: 2023/07/25 16:03:30 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
    
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = *stringPTR;

    std::cout   << "str address : " << &str << std::endl
                << "stringPTR contains : " << stringPTR << std::endl
                << "stringREF contains : " << &stringREF << std::endl;
    std::cout   << std::endl;
    std::cout   << "str value : " << str << std::endl
                << "stringPTR points on : " << *stringPTR << std::endl
                << "stringREF points on : " << stringREF << std::endl;
    return 0;
}
