#include "Human.hpp"

int main()
{
	Human bob;

	std::cout << bob.getBrain().testIq() << std::endl;
	std::cout << bob.iddentify() << std::endl;
	std::cout << bob.getBrain().iddentify() << std::endl;
	return (0);
}
