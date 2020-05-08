#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>

template<typename T>
int *easyfind(T& container, int value)
{
	try
	{
		if (container.empty() == true)
			throw(std::exception());
		for (int i = 0; i < container.size(); i++)
		{
			if (container[i] == value)
				return (&container[i]);
		}
		throw(std::exception());
	}
	catch (std::exception& e)
	{
		std::cout << "Exception: Value not find or container is empty\n";
		return (NULL);
	}
}

#endif
