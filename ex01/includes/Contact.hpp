/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:33:41 by achansar          #+#    #+#             */
/*   Updated: 2023/07/28 13:14:34 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
    public:
        Contact(void);
        ~Contact(void);

        void        displayContact(void) const;
        std::string stringFormat(int j);
        bool        isalnumerical(std::string str) const;
        bool        isPhoneNumber(std::string str) const;

        std::string getinfo(void) const;
        bool        setInfo(std::string str, int j);
        bool        setPhoneNumber(std::string str, int j);
    
    private:
        std::string info[5];
        // info : FirstName, LastName, NickName, PhoneNumber, Secret
};

#endif