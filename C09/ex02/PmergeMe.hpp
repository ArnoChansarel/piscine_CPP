/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:51:42 by achansar          #+#    #+#             */
/*   Updated: 2024/02/02 18:02:16 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <list>


class PmergeMe {
   
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& src);
		PmergeMe& operator=(const PmergeMe& src);
		~PmergeMe();

		void getData();

	private:
		std::string			_input;
		std::vector<int>	_vector;
		std::list<int>		_list;
};
