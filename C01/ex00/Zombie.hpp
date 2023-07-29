/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:11:52 by achansar          #+#    #+#             */
/*   Updated: 2023/07/28 19:51:42 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {
  
  public:
    Zombie( std::string name );
    ~Zombie(void);
    
    void            announce( void );
    Zombie*         newZombie( std::string name );
    void            randomChump( std::string name );

  private:
    std::string     name;    
};

#endif