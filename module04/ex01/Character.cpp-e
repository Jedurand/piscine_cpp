#include "Character.hpp"

Character::Character(std::string name)
{
	_name = name;
	_ap = 40;
	_weapon = nullptr;
}

Character::~Character()
{
//	if (_weapon != nullptr)
//		delete(_weapon);
}

Character::Character(const Character& character)
{
	_name = character._name;
	_weapon = character._weapon;
	_ap = 40;
}

void Character::operator = (const Character& character)
{
	_name = character._name;
	_weapon = character._weapon;
	_ap = 40;
}

std::string Character::getName() const
{
	return (_name);
}

int Character::getAp() const
{
	return (_ap);
}

void Character::printInfo() const
{
	if (_weapon == nullptr)
		std::cout << "None Weapon equiped\n";
	else
		std::cout << _weapon->getName() << " " << _weapon->getDamage() << std::endl;
}

void Character::equip(AWeapon* weapon)
{
	if (weapon == nullptr)
		return ;
	_weapon = weapon;
	std::cout << _weapon->getName() << " equiped ...\n";
}

void Character::recoverAp()
{
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
	std::cout << "Current AP after recovery: " << _ap << std::endl;
}

void Character::attack(Enemy* enemy)
{
	if (enemy == nullptr || _weapon == nullptr)
		return ;
	if (enemy->getHp() <= 0)
		return ;
	if (_ap < 10)
	{
		std::cout << "Not enough ap\n";
		return ;
	}
	_ap -= 10;
	std::cout << _name << " attack " << enemy->getType() << " with " <<
	_weapon->getName() << std::endl;
	enemy->takeDamage(_weapon->getDamage());
	if (enemy->getHp() <= 0)
	{
		delete(enemy);
		enemy = nullptr;
	}
}

std::string Character::carries() const
{
	if (_weapon == nullptr)
		return ("is unarmed");
	return ("carries " + _weapon->getName());
}	

std::ostream& operator << (std::ostream& out, const Character& character)
{
	out << character.getName() << " has " << character.getAp() << " ap and " << character.carries() << std::endl;
	return (out);
}
