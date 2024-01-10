/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:42:38 by achansar          #+#    #+#             */
/*   Updated: 2023/12/28 17:08:23 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {

    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm&);
        RobotomyRequestForm& operator=(const RobotomyRequestForm&);
        ~RobotomyRequestForm();

        void            action() const;
        std::string     getTarget() const;
        
    private:
        std::string     _target;
};