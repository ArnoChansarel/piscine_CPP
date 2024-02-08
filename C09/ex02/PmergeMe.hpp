/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:51:42 by achansar          #+#    #+#             */
/*   Updated: 2024/02/07 20:00:42 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <ctime>
#include <sstream>

class PmergeMe {
   
	public:
		PmergeMe(std::string input);
		PmergeMe(const PmergeMe& src);
		PmergeMe& operator=(const PmergeMe& src);
		~PmergeMe();

		void 	execute();
		
		void	MergeInsertionSortVec();
		void    sortPairsVec(std::vector<int>& vec, int left, int right);
		void 	recursivePairsSortVec(std::vector<int>::iterator start, std::vector<int>::iterator end);
		void 	insertSortVec();
		
		void 	MergeInsertionSortList();
		void    sortPairsList();
		void 	recursivePairsSortList(std::list<int>::iterator start, std::list<int>::iterator end);
		void 	insertSortList();

		void 	parseInput();
		static bool	compare(int a, int b);

		class NonNumberInputException : public std::exception {
			const char* what() const throw() {
				return "Error: Only positive number are accepted.";	
			}
		};

	private:
		PmergeMe();
		std::string			_input;
		std::vector<int>	_vector;
		std::list<int>		_list;
};

template <typename T>
void	printContainer(T chain) {
	
	for (typename T::iterator it = chain.begin(); it != chain.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	
	return;	
}
