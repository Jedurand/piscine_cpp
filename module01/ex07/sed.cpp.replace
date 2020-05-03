#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <cstdio>
#include <fstream>

int main(int ac, char **av)
{
	std::string b = "";
	std::string content = "";
	unsigned long i = 0;

	if (ac != 4)
		return (0);
	std::ifstream src(av[1]);
	if (!src)
		return (0);
	std::ofstream dest(std::string(av[1]) + ".replace");
	if (!dest)
		return (0);
	while (std::getline(src, b))
		content.append(b + "\n");
	std::string s1 = av[2];
	std::string s2 = av[3];
	while (i < content.size() && s1.size() > 0)
	{
		i = content.find(s1, i);
		if (i < content.size())
			content.replace(i, s1.size(), s2);
	}
	dest << content;
	dest.close();
	src.close();
	return (0);
}
