#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50)
{
	std::cout << "Power Fist created\n";
}

PowerFist::~PowerFist()
{
	std::cout << "Power Fist deleted\n";
}

PowerFist::PowerFist(const PowerFist& powerFist): AWeapon(powerFist)
{
	std::cout << "Power Fist copied\n";
}

void PowerFist::operator = (const PowerFist& powerFist)
{
	(void)powerFist;
	std::cout << "Power Fist copied\n";
}

void PowerFist::attack() const
{
	std::cout << "* pschhhh... SBAM! *\n";
}
