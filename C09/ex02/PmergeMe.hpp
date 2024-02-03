/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:51:42 by achansar          #+#    #+#             */
/*   Updated: 2024/02/03 17:16:01 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <ctime>

class PmergeMe {
   
	public:
		PmergeMe(std::string input);
		PmergeMe(const PmergeMe& src);
		PmergeMe& operator=(const PmergeMe& src);
		~PmergeMe();

		void getData();
		void executeAlgo(std::vector<int>& vec);
		void insertSortVec(std::vector<int>& vec);
		void mergeSortVec(std::vector<int>& vec, int left, int right, int ksize);

		static void printVec(std::vector<int> v);

	private:
		PmergeMe();
		std::string			_input;
		std::vector<int>	_vector;
		std::list<int>		_list;
};
