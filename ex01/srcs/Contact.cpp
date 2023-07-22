/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:03:30 by achansar          #+#    #+#             */
/*   Updated: 2023/07/22 15:26:11 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

//-------------- CONSTRUCT ------------------- //

Contact::Contact(void)
{
    std::cout << "Constructor Contact called" << std:: endl;
    for (int i = 0; i < 5; i++)
        this->info[i] = "";
    return;
}

Contact::~Contact(void)
{
    std::cout << "Destructor called" << std:: endl;
    return;
}

// ----------------- FUNCTIONS ---------------- //

bool Contact::isalnumerical(std::string str) const {

    for (int i = 0 ; i < str.length() ; i++) {
        if (!std::isalnum(str[i]) && str[i] != '+')
            return (0);
    }
    return (1);
}

bool Contact::setInfo(std::string str, int j) {

    try {
        if (isalnumerical(str)) {
            this->info[j] = str;
        } else {
            throw(str);
        } 
    } catch (std::string str) {
        std::cout << "Please enter only letters and digits." << std::endl;
        return (0);
    }
    return (1);
}

void Contact::displayContact(void) const {
    
    int j = 0;

    std::cout << "First name : " + info[j++] << std::endl;
    std::cout << "Last name : " + info[j++] << std::endl;
    std::cout << "Nickname name : " + info[j++] << std::endl;
    std::cout << "Phone Number : " + info[j++] << std::endl;
    std::cout << "Darkest secret : " + info[j++] << std::endl << std::endl;
}

std::string Contact::stringFormat(int j) {
    
    std::string input = info[j];
    if (input.length() < 10) {
        std::string str(10 - input.length(), ' ');
        str += input;
        input = str;
        return str;
    }
    else if (input.length() > 10) {
        std::string str = input;
        str.replace(9, str.length(), ".");
        return str;
    }
    else
        return input;
}
