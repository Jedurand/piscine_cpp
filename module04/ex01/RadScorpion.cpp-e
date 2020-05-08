#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *\n";
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *\n";
}

RadScorpion::RadScorpion(const RadScorpion& radScorpion): Enemy(radScorpion)
{
	std::cout << "* click click click *\n";
}

void RadScorpion::operator = (const RadScorpion& radScorpion)
{
	takeDamage(80 - radScorpion.getHp());
	std::cout << "* click click click *\n";
}

