#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	init_m();
}

MateriaSource::~MateriaSource()
{
	del_m();
}

MateriaSource::MateriaSource(const MateriaSource& materiaSource)
{
	for (int i = 0; i < 4; i++)
		_m[i] = materiaSource._m[i];
}

void MateriaSource::operator = (const MateriaSource& materiaSource)
{
	del_m();
	for (int i = 0; i < 4; i++)
		_m[i] = materiaSource._m[i];
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
