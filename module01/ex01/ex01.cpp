#include <iostream>
#include <string>

void memory_leak()
{
	std::string	*panthere = new std::string("string panthere");
	std::cout << *panthere << std::endl;
	delete(panthere);
}

void memory_leak2(std::string s = "")
{
	std::string	*ps = new std::string(s);
	std::cout << *ps << std::endl;
	delete(ps);
}

int main()
{
	memory_leak();
	memory_leak2();
	memory_leak2("Serio?");
//	while (1);
}	
