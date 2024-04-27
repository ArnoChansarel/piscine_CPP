/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:55:34 by achansar          #+#    #+#             */
/*   Updated: 2024/04/27 17:16:19 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// ===================================================================== CONSTRUCTORS

PmergeMe::PmergeMe() {
    return;
}

PmergeMe::PmergeMe(std::string input) {
    _input = input;
    return;
}

PmergeMe::PmergeMe(const PmergeMe& src) {
    *this = src;
    return;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& src) {
    /*
    
    */
    return *this;
}

PmergeMe::~PmergeMe() {
    return;
}

// ===================================================================== MEMBER FUNCTIONS

void PmergeMe::execute() {

    clock_t startVec = clock();
    MergeInsertionSortVec();
    clock_t stopVec = clock();
    
    clock_t startLst = clock();
    MergeInsertionSortList();
    clock_t stopLst = clock();

    double tVec = static_cast<double>(stopVec - startVec) / CLOCKS_PER_SEC * 1e6;
    double tLst = static_cast<double>(stopLst - startLst) / CLOCKS_PER_SEC * 1e6;
    
    std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector : " << tVec << " us" << std::endl;
    std::cout << "Time to process a range of " << _list.size() << " elements with std::list : " << tLst << " us" << std::endl;
    return;
}

// ===================================================================== MEMBER FUNCTIONS - VECTOR

void    PmergeMe::sortPairsVec(std::vector<int>& vec, int s, int e) {
    if (s >= e) {
        return;
    }

    sortPairsVec(vec, s + 2, e);

    if (vec[s] > vec[s + 1]) {
        std::swap(vec[s], vec[s + 1]);
    }
    return;
}

void PmergeMe::recursivePairsSortVec(std::vector<int>::iterator start, std::vector<int>::iterator end) {

    if (start == end) {
        return; 
    }

    std::vector<int>::iterator min = start;
    for (std::vector<int>::iterator it = start + 2; it <= end; it += 2) {
        if (*it < *min) {
            min = it;
        }
    }

    std::swap(*start, *min);
    std::swap(*(start - 1), *(min - 1));

    recursivePairsSortVec(start + 2, end);
}

void PmergeMe::insertSortVec() {
    for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); ++it) {
        for (std::vector<int>::iterator jt = it; jt != _vector.begin() && *(jt - 1) > *jt; --jt) {
            std::swap(*(jt - 1), *jt);
        }
    }
}

void PmergeMe::MergeInsertionSortVec() {

    int odd = -1;
    if (_vector.size() % 2) {
        odd = _vector.back();
        _vector.pop_back();
    }
    
    if (_vector.size() > 3) {
        std::vector<int> a, b;
        // std::vector<int> b;


        // std::cout << "STEP 0 : The input before sort pairs is ";
        // printContainer(_vector);
        sortPairsVec(_vector, 0, _vector.size());

        // std::cout << std::endl << "STEP 0bis : The input after sort pairs is ";
        // printContainer(_vector);
        
        
        // std::cout << "\n\nBEFORE RECURSIVE VECTOR\n";
        // printContainer(_vector);
        recursivePairsSortVec(_vector.begin() + 1, _vector.end() - 1);
        // std::cout << std::endl << "STEP 0ter : The input after sort pairs is ";
        // std::cout << "AFTER RECURSIVE VECTOR\n";
        // printContainer(_vector);

        for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); it++) {
            b.push_back(*it);
            it++;
            a.push_back(*it);
        }
        _vector.clear();

        // std::cout << "Main Chain : ";
        // printContainer(a);
        // std::cout << "Left Chain : ";
        // printContainer(b);
        // std::cout << std::endl;


        // std::cout << "vec b : ";
        // printContainer(b);
        // std::cout << "vec a : ";
        // printContainer(a);


        _vector.push_back(b[0]);
        _vector.push_back(a[0]);
        _vector.push_back(a[1]);
        _vector.push_back(b[1]);
        insertSortVec();

        // std::cout << "STEP 0 : ";
        // printContainer(_vector);
        // std::cout << "STEP 1 : ADD 4th element in a insertion zone of 3 : ";
        // printContainer(_vector);

        // std::cout << std::endl << "STEP 2 : ADD a B with insertion sort, then add A" << std::endl;

        for (int i = 2; i < a.size(); i++) {
            _vector.push_back(b[i]);
            insertSortVec();
            // std::cout << "After adding " << b[i] << " : ";
            // printContainer(_vector);
            _vector.push_back(a[i]);
            // std::cout << "After adding " << a[i] << " : ";
            // printContainer(_vector);
        }

    } else {
        insertSortVec();
    }
    if (odd > 0) {
        _vector.push_back(odd);
        insertSortVec();
    }
    std::cout << "Sorted VEC : ";
    printContainer(_vector);
    return;
}

// ===================================================================== MEMBER FUNCTIONS - LIST

void PmergeMe::insertSortList() {
    
    if (_list.size() == 3) {// covering one exception case
        for (std::list<int>::iterator it = _list.begin(); it != _list.end(); ++it) {
            for (std::list<int>::iterator jt = it; jt != _list.begin(); --jt) {
                std::list<int>::iterator prev = jt;
                --prev;

                if (*jt < *prev) {
                    std::swap(*jt, *prev);
                } else {
                    break;
                }
            }
        }
    }
    
    std::list<int>::iterator it = _list.end();
    if (it == _list.begin()) {
        return;
    }
    --it;
    while (it != _list.begin()) {
        std::list<int>::iterator prev = it;
        --prev;
        if (*it < *prev) {
            std::swap(*it, *prev);
        }
        if (prev == _list.begin()) {
            break;
        }
        --it;
    }
}


void 	PmergeMe::recursivePairsSortList(std::list<int>::iterator start, std::list<int>::iterator end) {

    if (std::distance(start, end) < 2) {return;}

    std::list<int>::iterator min = start;
    std::list<int>::iterator nxt = start;
    std::advance(nxt, 2);
    for (std::list<int>::iterator it = nxt; it != end;) {
        if (*it < *min) {
            min = it;
        }
        if ((++it)++ == end) {
            break ;
        }
    }

    std::iter_swap(start, min);
    std::advance(start, -1);
    std::advance(min, -1);
    std::iter_swap(start, min);

    std::advance(start, 3);
    recursivePairsSortList(start, end);

    return;
}


void    PmergeMe::sortPairsList() {

    std::list<int>::iterator nxt;

    for (std::list<int>::iterator it = _list.begin(); it != _list.end(); std::advance(it, 2)) {
        nxt = it;
        std::advance(nxt, 1);
        if (*it > *nxt) {
            std::iter_swap(it, nxt);
        }
    }
    return;
}

void PmergeMe::MergeInsertionSortList() {
    
    int odd = -1;
    if (_list.size() % 2) {
        odd = _list.back();
        _list.pop_back();
    }
    
    if (_list.size() > 3) {
        std::list<int> a, b;
        

        sortPairsList();
        // std::cout << "After sort pair : ";
        // printContainer(_list);


        std::list<int>::iterator start, end;
        start = _list.begin();
        end = _list.end();
        std::advance(start, 1);
        // std::advance(end, -1);

        // std::cout << "Before recursive, start = " << *start << " and end = " << *end << std::endl;
        // std::cout << "\n\nbefore recursive Pair Sort : ";
        // printContainer(_list);
        recursivePairsSortList(start, end);
        // std::cout << "After recursive Pair Sort : ";
        // printContainer(_list);

        for (std::list<int>::iterator it = _list.begin(); it != _list.end(); it++) {
            b.push_back(*it);
            it++;
            a.push_back(*it);
        }
        _list.clear();

        std::list<int>::iterator itB = b.begin();
        std::list<int>::iterator itA = a.begin();

        _list.push_back(*itB);
        _list.push_back(*itA);
        std::advance(itB, 1);
        std::advance(itA, 1);
        _list.push_back(*itA);
        _list.push_back(*itB);
        insertSortList();
        
        // std::cout << "STEP 0 : ";
        // printContainer(_list);
        // std::cout << "STEP 1 : ADD 4th element in a insertion zone of 3 : ";
        // printContainer(_list);

        // std::cout << std::endl << "STEP 2 : ADD a B with insertion sort, then add A" << std::endl;

        std::advance(itB, 1);
        std::advance(itA, 1);
        for (int i = 2; i < a.size(); i++) {
            _list.push_back(*itB);
            insertSortList();
            _list.push_back(*itA);
            std::advance(itB, 1);
            std::advance(itA, 1);
        }

    } else {
        insertSortList();
        // std::cout << "Sorted : "; 
        // printContainer(_list);
    }

    if (odd > 0) {
        _list.push_back(odd);
        insertSortList();
    }
    std::cout << "Sorted LIST: "; 
    printContainer(_list);
    return;
}

// ===================================================================== MEMBER FUNCTIONS - UTILS

bool	PmergeMe::compare(int a, int b) {
    return (a < b);    
}

void    PmergeMe::parseInput() {
    
    std::istringstream iss(_input);
    std::string token;
    
    while (std::getline(iss, token, ' ')) {
        int value;
        if (std::istringstream(token) >> value && value > 0) {
            _vector.push_back(value);
            _list.push_back(value);
        }
        else
            throw NonNumberInputException();
    }

    // std::cout << "Vector : ";
    // printContainer(_vector);
    // std::cout << "List : ";
    // printContainer(_list);
    return;
}
