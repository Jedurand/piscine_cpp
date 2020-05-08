#include <iostream>
#include <cctype>
#include <cstdio>
#include <cstring>

void megaphone(char str[])
{
	std::string s = str;
	for (unsigned int i = 0; i < s.size(); i++)
		putchar(toupper(s[i]));
}

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "*LOUD AND UNBEARABLE FEEDBACH NOISE*";
	else
	{
		for (int i = 1; i < ac; i++)
			megaphone(av[i]);
	}
	std::cout << std::endl;
	return (0);
}
