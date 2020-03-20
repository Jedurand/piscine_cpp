#include "Fixed.hpp"

int main(void)
{
	float f = 150.12;
	float f2 = 10.1;
	Fixed a(f2);
	Fixed b(f);
	
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << b.toFloat() << std::endl;
	
	Fixed c(a + b);
	std::cout << c << std::endl;


	return (0);
}
