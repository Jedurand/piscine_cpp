#include "easyfind.hpp"
#include <vector>

int main()
{
	std::vector<int> vec;
	vec.push_back(12);
	vec.push_back(-5);
	vec.push_back(-35);
	vec.push_back(150);

	try
	{
		std::cout << easyfind(vec, -35) << std::endl;
		std::cout << easyfind(vec, -76552) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Value not found" << std::endl;
	}
	try
	{
		std::cout << easyfind(vec, 12) << std::endl;
		std::cout << easyfind(vec, 150) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Value not found" << std::endl;
	}
	try
	{
		std::vector<int> empty;
		easyfind(empty, 150000);
	}
	catch (std::exception& e)
	{
		std::cout << "Value not found" << std::endl;
	}
//	std::list<int> list;

//	p = easyfind(vec_f, 12);
//	if (p)
//		std::cout << *p << std::endl;
}
