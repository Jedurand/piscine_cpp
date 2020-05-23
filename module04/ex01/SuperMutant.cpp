#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "SuperMutant")
{
	std::cout << "Gaaaah. Break everything!\n";
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaaargh...\n";
}

SuperMutant::SuperMutant(const SuperMutant& superMutant): Enemy(superMutant)
{
	std::cout << "Gaaaah. Break everything!\n";
}

void SuperMutant::takeDamage(int damage)
{
	if (damage - 3 >= 0)
		Enemy::takeDamage(damage - 3);
	else
		Enemy::takeDamage(0);
}
