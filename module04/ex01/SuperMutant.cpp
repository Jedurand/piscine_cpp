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

void SuperMutant::operator = (const SuperMutant& superMutant)
{
	std::cout << "Gaaaah. Break everything!\n";
}
/*
void SuperMutant::takeDamage(int damage)
{
	if (getHp()  - (damage - 3) <= 0)
		_hp = 0;
	else
		_hp -= (damage - 3);
	std::cout << _type << " takes " << damage - 3 << ". Remaining hp: " << _hp << std::endl;
} */

void SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}
