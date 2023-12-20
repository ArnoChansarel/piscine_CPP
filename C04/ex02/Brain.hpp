/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:58:13 by achansar          #+#    #+#             */
/*   Updated: 2023/12/20 12:00:38 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Brain {
    
    public:
        Brain(void);
        Brain(const Brain&);
        Brain& operator=(const Brain&);
        ~Brain(void);

        std::string getIdeas(int i) const;
        
    private:
        std::string _ideas[100];
};