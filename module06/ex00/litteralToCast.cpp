#include <iostream>
#include <string>
#include <climits>
#include <limits>

/*void is_int(int& i)
{
	std::cout << i << " is a int\n";
}
*/
//COUT FAIT UN ARRONDI

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

//	std::cout << d << " is a double\n";
	std::cout << "Double: " << d;
	if (d - static_cast<double>(i) == 0)
		std::cout << ".0";
	std::cout << std::endl;

	std::cout << "Float: ";
//	if (d > std::numeric_limits<float>::max()) //&& d != std::inf)
//		std::cout << "Impossible\n";
//	else
//	{
		std::cout << static_cast<float>(d);
		if (d - static_cast<double>(i) == 0)
			std::cout << ".0";
		std::cout << "f\n";
//	}

	std::cout << "Int: ";
	if (!(d < static_cast<double>(INT_MIN) || d > static_cast<double>(INT_MAX)))
		std::cout << i << std::endl;
	else
		std::cout << "Impossible\n";

	std::cout << "Char: ";
	if (i < 127 && i > 31)
		std::cout << "'" << (char)i << "'" << std::endl;
	else if (i >= 0 && i <= 127)
		std::cout << "Non dispalyable\n";
	else
		std::cout << "Impossible\n";
}
/*
void is_float(float& f)
{
	std::cout << f << " is a float\n";
}
*/
int main(int ac, char **av)
{
//	int	i;
	char	c;
//	float	f;
	double	d;

	if (ac != 2)
		return (1);

	if (sscanf(av[1], "%lf", &d) == 1)
		is_double(d);
//	else if (sscanf(av[1], "%f", &f) == 1)
//		is_float(f);
//	else if (sscanf(av[1], "%d", &i) == 1)
//		is_int(i);
	else if (sscanf(av[1], "%c", &c) == 1)
		is_char(c);
//	std::cout << std::numeric_limits<float>::min() << " " << std::numeric_limits<float>::max() << std::endl;

	return (0);
}
