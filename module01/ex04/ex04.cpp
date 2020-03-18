#include <iostream>
#include <string>

int main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string *ps = &s;
	std::string &rs = s;

	std::cout << "With a pointer:\n" << *ps << "\n";
	std::cout << "With a ref:\n" << rs << "\n";
	return (0);
}
