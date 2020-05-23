#include "Fish.hpp"

Fish::Fish(): Enemy(20, "Fish")
{
	std::cout << "* Trempette *\n";
}

Fish::~Fish()
{
	std::cout << "* PLOUF *\n";
}

Fish::Fish(const Fish& fish): Enemy(fish)
{
	std::cout << "* PLOUF PLOUF PLOUF *\n";
}
