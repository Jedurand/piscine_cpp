#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
}

void HumanB::attack()
{
	if (_weapon != NULL)
		std::cout << _name + " attacks with his " + _weapon->getType() + "\n";
	else
		std::cout << _name + " got no weapon, bad idea, bad idea ...\n";
}

void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}
