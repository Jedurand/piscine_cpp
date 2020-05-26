#include <iostream>
#include <string>
#include <climits>
#include <limits>
#include <math.h>

void is_char(char& c)
{
	std::cout << "Double: " << static_cast<double>(c) <<std::endl;

	std::cout << "Float: ";
	std::cout << static_cast<float>(c) << "f" << std::endl;

	std::cout << "Int: " << static_cast<int>(c) << std::endl;

	std::cout << "Char: ";
	std::cout << "'" << c << "'" << std::endl;
}

void is_double(double& d)
{
	int i = static_cast<int>(d);

	std::cout << "Double: " << d;
	if (d - static_cast<double>(i) == 0)
		std::cout << ".0";
	std::cout << std::endl;

	std::cout << "Float: ";
	std::cout << static_cast<float>(d);
	if (d - static_cast<double>(i) == 0)
		std::cout << ".0";
	std::cout << "f\n";

	std::cout << "Int: ";
	if (!(d < static_cast<double>(INT_MIN) || d > static_cast<double>(INT_MAX))
	&& !isnan(d))
		std::cout << i << std::endl;
	else
		std::cout << "Impossible\n";

	std::cout << "Char: ";
	if (i < 127 && i > 31)
		std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
	else if (i >= 0 && i <= 127)
		std::cout << "Non dispalyable\n";
	else
		std::cout << "Impossible\n";
}

int main(int ac, char **av)
{
	char	c;
	double	d;

	if (ac != 2)
		return (1);

	if (sscanf(av[1], "%lf", &d) == 1)
		is_double(d);
	else if (sscanf(av[1], "%c", &c) == 1)
		is_char(c);

	return (0);
}
