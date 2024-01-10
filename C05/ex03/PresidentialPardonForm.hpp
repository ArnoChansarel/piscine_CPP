/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:35:22 by achansar          #+#    #+#             */
/*   Updated: 2023/12/28 19:13:28 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {

    public:
        PresidentialPardonForm(std::string name, std::string target);
        PresidentialPardonForm(const PresidentialPardonForm&);
        PresidentialPardonForm& operator=(const PresidentialPardonForm&);
        ~PresidentialPardonForm();

        void            action() const;
        std::string     getTarget() const;
        
    private:
        std::string     _target;
        
};