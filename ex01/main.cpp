/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 20:03:58 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/11/02 12:05:37 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

struct Print {
	template <typename U>
	void operator()(U const& x) const { std::cout << x << " "; }
};

struct Increment {
	void operator()(int &x) const { ++x; }
};

struct Uppercase {
	void operator()(char &c) const {
		if (c >= 'a' && c <= 'z') c = char(c - 'a' + 'A');
	}
};

int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	::iter(a, 5u, Increment());
	::iter(a, 5u, Print());
	std::cout << std::endl;

	const std::string s[3] = {"hello", "42", "Beirut"};
	::iter(s, 3u, Print());
	std::cout << std::endl;

	char msg[10] = "iter demo";
	::iter(msg, 9u, Uppercase());
	::iter(msg, 9u, Print());
	std::cout << std::endl;

	return 0;
}
