/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:59:50 by achansar          #+#    #+#             */
/*   Updated: 2024/04/10 11:18:49 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

//-------------- CONSTRUCT -------------------
PhoneBook::PhoneBook(void)
{
    std::cout << "Constructor PhoneBook called" << std:: endl;
    this->index = 0;
    return;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "Destructor called" << std:: endl;
    return;
}


// ----------------- FUNCTIONS ----------------

void PhoneBook::askInfos(const char *str, int i, int j)
{
    std::string userInput;

    while (1) {
        std::cout << str;
        std::getline(std::cin, userInput);
        if (std::cin.eof()) {
            std::cout << "EOF flag set" << std::endl;
            exit(1);
        }
        if (userInput == "") {
            std::cout << "Empty string. Try again." << std::endl;
            continue;
        }
        if (j == 3) {
            if (array[i].setPhoneNumber(userInput, j))
                break;   
        }
        else {    
            if (array[i].setInfo(userInput, j))
                break;
        }
    }
    return;
}

void PhoneBook::addContact(void)
{
    int j = - 1;
    std::string userInput;
    
    if (this->index == 8)
        this->index = 0;

    askInfos("First name ?: ", index, ++j);
    askInfos("Last name ?: ", index, ++j);
    askInfos("Nickname ?: ", index, ++j);
    askInfos("Phone Number ?: ", index, ++j);
    askInfos("Darkest secret ?: ", index, ++j);

    std::cout << "Contact added." << std::endl;
    this->index++;
    return;
}

int PhoneBook::chooseFunc(void)
{
    while (1)
    {
        std::string userAnswer;
        std::cout << "Please choose a command : ADD, SEARCH, EXIT" << std::endl;
        std::getline(std::cin, userAnswer);
        if (std::cin.eof()) {
            std::cout << "EOF flag set" << std::endl;
            exit(1);
        }
        if (userAnswer.compare("ADD") == 0)
            this->addContact();
        else if (userAnswer.compare("SEARCH") == 0)
            this->searchContact();
        else if (userAnswer.compare("EXIT") == 0)
        {
            std::cout << "Byebye !" << std::endl;
            break;
        }
        else
            std::cout << "Wrong entry. Please enter a right command." << std::endl;
    }
    return 0;
}
