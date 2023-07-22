/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchContact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:05:20 by achansar          #+#    #+#             */
/*   Updated: 2023/07/22 15:34:03 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

void PhoneBook::getContactIndex(void) const {

    std::cout << "Please enter the index of a contact to get infos : ";
    
    while (true) {
        std::string userAnswer;
        std::getline(std::cin, userAnswer);
    
        try {
            size_t pos = 0;
            int i = std::stoi(userAnswer, &pos);
            if (pos == userAnswer.length() && i >= 1 && i <= 8) {
                        array[i - 1].displayContact();
                        break;
            } else
                std::cout << "This index doesn't exist. Please try again : ";
        } catch (const std::invalid_argument& i) {
            std::cout << "Please enter a numerical index between 0 and 8 : ";
        } catch (const std::out_of_range& i) {
            std::cout << "Seriously ? Try again with a number between 0 and 8 : ";
        }
    }
    return;
}

void PhoneBook::searchContact(void) {

    std::cout << " ___________________________________________ " << std::endl;
    std::cout << "|   index  |first name| last name| nickname |" << std::endl;
    std::cout << " ___________________________________________ " << std::endl;
    for (int i = 0; i < 8; i++)
    {
        std::cout << "|    " << (char)i + 1 << "     ";
        for (int j = 0; j < 3; j++) {
            std::string formatted = array[i].stringFormat(j);
            std::cout << "|" << formatted;
        }
        std::cout << "|" << std::endl;
    }
    std::cout << " ___________________________________________ " << std:: endl;
    getContactIndex();
    return;
}
