/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:58:13 by achansar          #+#    #+#             */
/*   Updated: 2023/12/27 12:48:02 by achansar         ###   ########.fr       */
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
        void IThinkOf(int i) const;
        
    protected:
        std::string _ideas[100];
};
