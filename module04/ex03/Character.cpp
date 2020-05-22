#include "Character.hpp"

Character::Character(std::string name)
{
	_name = name;
	init_materias();
}

Character::~Character()
{
	deleteMaterias();
}

Character::Character(const ICharacter& character)
{
	_name = character.getName();
	Character *character2 = (Character*)&character;
	for (int i = 0; i < 4; i++)
	{
		if (character2->_m[i] != 0)
			_m[i] = character2->_m[i]->clone();
		else
			_m[i] = 0;
	}
}

void Character::operator = (const ICharacter& character)
{
	_name = character.getName();
	Character *character2 = (Character*)&character;
	deleteMaterias();
	for (int i = 0; i < 4; i++)
	{
		if (character2->_m[i] != 0)
			_m[i] = character2->_m[i]->clone();
		else
			_m[i] = 0;
	}
}

void Character::deleteMaterias()
{
	for (int i = 0; i < 4; i++)
	{
		if (_m[i] != 0)
			delete(_m[i]);
	}
}

void Character::init_materias()
{
	for (int i = 0; i < 4; i++)
		_m[i] = 0;

}

/////////////////////////

std::string Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_m[i] == 0)
		{
			_m[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	_m[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || _m[idx] == 0)
		return ;
	_m[idx]->use(target);
}
