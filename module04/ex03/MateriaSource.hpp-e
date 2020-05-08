#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource& materiaSource);
	void operator = (const MateriaSource& materiaSource);

	void learnMateria(AMateria* m);
	AMateria* createMateria(const std::string& ctype);

	void init_m();
	void del_m();

	private:
	AMateria *_m[4];
};

#endif
