#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *\n";
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *\n";
}

RadScorpion::RadScorpion(const RadScorpion& superMutant): Enemy(superMutant)
{
	std::cout << "* click click click *\n";
}

void RadScorpion::operator = (const RadScorpion& superMutant)
{
	std::cout << "* click click click *\n";
}

