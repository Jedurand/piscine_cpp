#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = nullptr;
}

void HumanB::attack()
{
	std::cout << _name + " attacks with his " + _weapon->getType() + "\n";
}

void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}
