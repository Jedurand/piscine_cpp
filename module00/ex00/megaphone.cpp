#include <iostream>
#include <cctype>
#include <cstdio>
#include <cstring>

void megaphone(char s[])
{
	for (int i = 0; i < std::strlen(s); i++)
		putchar(toupper(s[i]));
}

int main(int ac, char **av)
{
	if (ac == 1)
		megaphone("*LOUD AND UNBEARABLE FEEDBACH NOISE*");
	else
	{
		for (int i = 1; i < ac; i++)
			megaphone(av[i]);
	}
	std::cout << std::endl;
	return (0);	
}


