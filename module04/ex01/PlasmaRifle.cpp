#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{
	std::cout << "Plasma Rifle created\n";
}

PlasmaRifle::~PlasmaRifle()
{
	std::cout << "Plasma Rifle deleted\n";
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& plasmaRifle): AWeapon(plasmaRifle)
{
	std::cout << "Plasma Rifle copied\n";
}

void PlasmaRifle::operator = (const PlasmaRifle& plasmaRifle)
{
	(void)plasmaRifle;
	std::cout << "Plasma Rifle copied\n";
}

void PlasmaRifle::attack() const
{
	std::cout << "* piou piou piou *\n";
}
