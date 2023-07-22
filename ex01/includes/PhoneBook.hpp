/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:49:38 by achansar          #+#    #+#             */
/*   Updated: 2023/07/22 15:35:49 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook {
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void searchContact(void);
        void addContact(void);
        int chooseFunc(void);
        void askInfos(const char *str, int i, int j);
        void getContactIndex(void) const;

    private:
        int index;
        Contact array[8];
};

#endif
