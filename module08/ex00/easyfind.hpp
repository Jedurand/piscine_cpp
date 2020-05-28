#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <exception>

template<typename T>
int& easyfind(T& container, int value)
{
	typename T::iterator it;

	if (container.empty() == true)
		throw(std::exception());
	it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw(std::exception());
	return (*it);
}

#endif
