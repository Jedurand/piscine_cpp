#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	init_m();
}

MateriaSource::~MateriaSource()
{
	del_m();
}

MateriaSource::MateriaSource(const IMateriaSource& materiaSource)
{
	MateriaSource* materiaSource2 = (MateriaSource*)&materiaSource;
	for (int i = 0; i < 4; i++)
	{
		if (materiaSource2->_m[i] != 0)
			_m[i] = materiaSource2->_m[i]->clone();
		else
			_m[i] = 0;
	}
}

void MateriaSource::operator = (const IMateriaSource& materiaSource)
{
	del_m();
	MateriaSource* materiaSource2 = (MateriaSource*)&materiaSource;
	for (int i = 0; i < 4; i++)
	{
		if (materiaSource2->_m[i] != 0)
			_m[i] = materiaSource2->_m[i]->clone();
		else
			_m[i] = 0;
	}
}

void MateriaSource::init_m()
{
	for (int i = 0; i < 4; i++)
		_m[i] = 0;
}

void MateriaSource::del_m()
{
	for (int i = 0; i < 4; i++)
		delete(_m[i]);
}

////////////////////////////////////////

void MateriaSource::learnMateria(AMateria* m)
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

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_m[i]->getType() == type)
		{
			AMateria *b;
			b = _m[i]->clone();
			return (b);
		}
	}
	return (0);
}
