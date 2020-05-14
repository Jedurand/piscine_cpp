#include "Fixed.hpp"

template<typename T>
void print_stuff(T& a, Fixed fixed)
{
	std::cout << "Var: " << a << " || Fixed: " << fixed << std::endl;
}

int main(void)
{
	int a = 0; int b = 12; int c = 12345; int d = -98765;
	float f1 = 1.0; float f2 = 1.125; float f3 = 12.12; float f4 = 0.01;
	float f5 = -1.012; float f6 = 0.5;


	print_stuff(a, Fixed(a));
	print_stuff(b, Fixed(b));
	print_stuff(c, Fixed(c));
	print_stuff(d, Fixed(d));

	print_stuff(f1, Fixed(f1));
	print_stuff(f2, Fixed(f2));
	print_stuff(f3, Fixed(f3));
	print_stuff(f4, Fixed(f4));
	print_stuff(f5, Fixed(f5));
	print_stuff(f6, Fixed(f6));

	Fixed ff1(f1);
	Fixed ff2(f2);
	Fixed ff3(f3);
	Fixed ff4(f4);
	Fixed ff5(f5);
	Fixed ff6(f6);

	Fixed fd1(a);
	Fixed fd2(b);
	Fixed fd3(c);
	Fixed fd4(d);

	std::cout << ff1.toFloat() << " " << ff2.toFloat() << " " <<
	ff3.toFloat() << " " << ff3.toFloat() << " " << ff4.toFloat() << " " <<
	ff5.toFloat() << " " << ff6.toFloat() << " " << std::endl;

	std::cout << ff1.toInt() << " " << ff2.toInt() << " " <<
	ff3.toInt() << " " << ff3.toInt() << " " << ff4.toInt() << " " <<
	ff5.toInt() << " " << ff6.toInt() << " " << std::endl;

	std::cout << fd1.toFloat() << " " << fd2.toFloat() << " " <<
	fd3.toFloat() << " " << fd4.toFloat() << std::endl;


	return (0);
}
