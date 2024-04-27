/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:53:18 by achansar          #+#    #+#             */
/*   Updated: 2024/02/19 13:27:11 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array {
    
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& src);
        Array& operator=(const Array& src);
        ~Array();

        unsigned int size() const;
        T& operator[](unsigned int i);
        const T& operator[](unsigned int i) const;
        
    private:
        T*              _array;
        unsigned int    _n;
};

template <typename T>
Array<T>::Array() : _array(NULL), _n(0) {
	return;	
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]()), _n(n) {
	return;
}

template <typename T>
Array<T>::Array(const Array& src) {
	*this = src;
	return;	
}


template <typename T>
Array<T>& Array<T>::operator=(const Array& src) {
	
	if (this != &src) {
        _n = src.size();

		_array = new T[_n]();
		for (int i = 0; i < _n; i++) {
			_array[i] = src[i];
		}
	}
	return *this;
}

template <typename T>
Array<T>::~Array() {
    delete[] _array;
	return;
}

template <typename T>
T& Array<T>::operator[](unsigned int i) {

    if (i >= size())
        throw std::out_of_range("Index out of bounds in Array");
	return _array[i];
}

template <typename T>
const T& Array<T>::operator[](unsigned int i) const {

    if (i >= size())
        throw std::out_of_range("Index out of bounds in Array");
	return _array[i];
}


template <typename T>
unsigned int Array<T>::size() const {
    return _n;
}
