/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:42:38 by achansar          #+#    #+#             */
/*   Updated: 2024/01/14 16:47:44 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {

    public:
        RobotomyRequestForm(std::string name, std::string target);
        RobotomyRequestForm(const RobotomyRequestForm&);
        RobotomyRequestForm& operator=(const RobotomyRequestForm&);
        ~RobotomyRequestForm();

        void            action() const;
        std::string     getTarget() const;
        
    private:
        RobotomyRequestForm();
        std::string     _target;
};