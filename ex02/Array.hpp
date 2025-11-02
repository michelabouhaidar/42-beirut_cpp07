/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 12:27:53 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/11/02 16:23:34 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstdlib>

template<typename T>
class Array
{
	private:
		T* arr_;
		unsigned int size_;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const& A);
		Array& operator=(Array const& A);
		~Array();
		T& operator[](unsigned int n);
		const T& operator[](unsigned int n) const;
		unsigned int size() const;
};

#include "Array.tpp"
#endif