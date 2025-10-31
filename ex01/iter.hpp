/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:56:26 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/10/31 20:02:14 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T, typename F>
void iter(T const *arr, size_t len, F func)
{
	if (!arr)
		return;
	for (size_t i = 0; i < len; i++)
		func(*arr[i]);
}

template <typename T, typename F>
void iter(T const *arr, size_t len, F func)
{
	if (!arr)
		return;
	for (size_t i = 0; i < len; i++)
		func(*arr[i]);
}

#endif