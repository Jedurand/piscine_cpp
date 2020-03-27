#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;
	vec.push_back(12);
	vec.push_back(-5);
	vec.push_back(-35);
	vec.push_back(150);
	
	std::cout << *easyfind(vec, -35) << std::endl;
	int *p = easyfind(vec, -76552);
	if (p)
		std::cout << *p << std::endl;
	std::vector<int> empty;

	p = easyfind(empty, 764);
	if (p)
		std::cout << *p << std::endl;
	:x

	std::vector<float> vec_f;
	vec_f.push_back(12.76);
	vec_f.push_back(123.65);
	
//	p = easyfind(vec_f, 12);
//	if (p)
//		std::cout << *p << std::endl;
}
