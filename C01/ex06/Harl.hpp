/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:18:18 by achansar          #+#    #+#             */
/*   Updated: 2023/07/28 19:47:19 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {

    public:
        Harl(void);
        ~Harl();

        void complain( std::string level );

    private:
        void debug( void ) {
            std::cout << "DEBUG !" << std::endl;
            return;
        }
        
        void info( void ) {
            std::cout << "INFO!" << std::endl;
            return;
        }
        
        void warning( void ) {
            std::cout << "WARNING!" << std::endl;
            return;
        }
        
        void error( void ) {
            std::cout << "ERROR!" << std::endl;
            return;
        }

        enum level_enum {
            DEBUG, INFO, WARNING, ERROR
        };
};

#endif
