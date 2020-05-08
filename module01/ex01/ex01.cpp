#include <iostream>
#include <string>

void memory_leak()
{
	std::string	*panthere = new std::string("string panthere");
	std::cout << *panthere << std::endl;
	delete(panthere);
}
