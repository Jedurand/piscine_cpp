#include <iostream>
#include <string>

template<typename T>
void swap(T& a, T& b)
{
	T c = b;
	b = a;
	a = c;
}

template<typename T>
T min(const T& a, const T& b)
{
	if (b <= a)
		return (b);
	return (a);
}
	
template <typename T>
T max(const T& a, const T& b)
{
	if (b >= a)
		return (b);
	return (a);
}

int main()
{
	int a = 1;
	int b = 2;
	::swap(a, b);
	std::cout << a << " " << b << std::endl;
	::swap(a, b);
	std::cout << ::min(a, b) << std::endl;
	std::cout << ::min(12, 1) << " " << ::min(12.150, 12.150) << std::endl;
	std::cout << ::max(a, b) << std::endl;
	std::cout << ::max(12, 1) << " " << ::max(12.150, 12.150) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << ::min(c, d) << std::endl;
	
	 
}
	
