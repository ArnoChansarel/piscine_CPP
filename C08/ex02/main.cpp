/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:39:43 by achansar          #+#    #+#             */
/*   Updated: 2024/03/12 18:07:45 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <vector>

void putString(std::string str) {
    
    std::cout << str << std::endl;
    return;
}

int main() {
		putString("Test with MutantStack");
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		
		std::cout << "Top : " << mstack.top() << std::endl;

		mstack.pop();

		std::cout << "Size : " << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		std::cout << "Print : \n";
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::cout << std::endl;
	}
		putString("Test with List");
		{
		std::list<int> mstack;

		mstack.push_back(5);
		mstack.push_back(17);

		std::cout << "Top : " << mstack.back() << std::endl;

		mstack.pop_back();

		std::cout << "Size : " << mstack.size() << std::endl;

		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);

		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();

		++it;
		--it;

		std::cout << "Print : \n";
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		}
		putString("\nTest with Vector");
	{
		std::vector<int> mstack;

		mstack.push_back(5);
		mstack.push_back(17);

		std::cout << "Top : " << mstack.back() << std::endl;

		mstack.pop_back();

		std::cout << "Size : " << mstack.size() << std::endl;

		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);

		std::vector<int>::iterator it = mstack.begin();
		std::vector<int>::iterator ite = mstack.end();

		++it;
		--it;

		std::cout << "Print : \n";
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

	}
	return 0;
}