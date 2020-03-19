#include "Fixed.hpp"

int main(void)
{
	Fixed a(11010);
	float f = -12.222;
	Fixed b(f);

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << a.toInt() << std::endl;
	std::cout << b.toFloat() << std::endl;
	return (0);
}
