/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:42:56 by achansar          #+#    #+#             */
/*   Updated: 2023/12/28 19:14:00 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

    public:
        ShrubberyCreationForm(std::string name, std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm&);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
        ~ShrubberyCreationForm();

        void            action() const;
        std::string     getTarget() const;
        
    private:
        std::string     _target;
        
};