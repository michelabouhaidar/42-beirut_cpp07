/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 12:32:45 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/11/02 16:40:26 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <stdexcept>

template<typename T>
Array<T>::Array() : arr_(NULL), size_(0) {};

template<typename T>
Array<T>::Array(unsigned int n) : size_(n)
{
	if (n != 0)
		arr_ = new T[n];
	else
	 arr_ = NULL;
}

template<typename T>
Array<T>::Array(Array const& A) : arr_(NULL), size_(0)
{
	*this = A;
}

template<typename T>
Array<T>& Array<T>::operator=(Array const& A)
{
	if (this != &A)
	{
		delete arr_;
		size_ = A.size_;
	}
	if (size_ == 0)
		arr_ = NULL;
	else
	{
		arr_ = new T[size_];
		for (unsigned int i = 0; i < size_; i++)
			arr_[i] = A.arr_[i];
	}
	return *this;
}

template<typename T>
Array<T>::~Array()
{
	delete[] arr_;
}

template<typename T>
T& Array<T>::operator[](unsigned int n)
{
	if (n >= size_)
		throw std::out_of_range("Index exceeds the size");
	return arr_[n];
}

template<typename T>
const T& Array<T>::operator[](unsigned int n) const
{
	if (n >= size_)
		throw std::out_of_range("Index exceeds the size");
	return arr_[n];
}

template<typename T>
unsigned int Array<T>::size() const
{
	return size_;
}


