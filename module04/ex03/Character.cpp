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

Character::Character(const Character& character)
{
	_name = character.getName();
	deleteMaterias();
	for (int i = 0; i < 4; i++)
		_m[i] = character._m[i];
}

void Character::operator = (const Character& character)
{
	_name = character.getName();
	deleteMaterias();
	for (int i = 0; i < 4; i++)
		_m[i] = character._m[i];	
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
	if (_m[idx] == 0)
		return ;
	_m[idx]->use(target);
}
