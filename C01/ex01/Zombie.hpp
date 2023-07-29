/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:11:52 by achansar          #+#    #+#             */
/*   Updated: 2023/07/28 19:52:33 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {
  
  public:
    Zombie(void);
    ~Zombie(void);
    
    void            announce( void );
    static Zombie*  zombieHorde( int N, std::string name );
    
  private:
    std::string     name;
};

#endif