/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:55:34 by achansar          #+#    #+#             */
/*   Updated: 2024/02/03 17:19:14 by achansar         ###   ########.fr       */
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

void PmergeMe::insertSortVec(std::vector<int>& vec) {
    int size = static_cast<int>(vec.size());

    if (size <= 1)
        return;

    for (int i = 1; i < size; i++) {
        int value = vec[i];
        int j = i - 1;

        while (j >= 0 && value < vec[j]) {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = value;
    }
}

void PmergeMe::mergeSortVec(std::vector<int>& vec, int left, int right, int ksize) {
    
    int vecSize = right - left;
    if (vecSize <= ksize)
        return;

    int mid = left + (right - left) / 2;

    mergeSortVec(vec, left, mid, ksize);
    mergeSortVec(vec, mid, right, ksize);
    
    std::vector<int>    A(0);
    std::vector<int>    B(0);

    for (int i = left; i < mid; i++) {
        A.push_back(vec[i]);
    }

    int j;
    for (int i = mid; i < right; i++) {
        B.push_back(vec[i]);
        j = i;
    }
    
    insertSortVec(A);
    insertSortVec(B);

    for (int i = right - 1; i >= mid; i--) {
        vec[i] = B.back();
        B.pop_back();
    }

    for (int i = mid - 1; i >= left; i--) {
        vec[i] = A.back();
        A.pop_back();
    }
    return;
}

void PmergeMe::executeAlgo(std::vector<int>& vec) {
    
    clock_t start = clock();

    
    mergeSortVec(vec, 0, vec.size(), 1);
    insertSortVec(vec);

    clock_t stop = clock();
    
    double t = static_cast<double>(stop - start);
    
    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << t << " us" << std::endl;
    return;
}

void PmergeMe::printVec(std::vector<int> v) {
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return;
}
