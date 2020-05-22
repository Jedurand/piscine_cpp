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
	MateriaSource(const IMateriaSource& materiaSource);
	void operator = (const IMateriaSource& materiaSource);

	void learnMateria(AMateria* m);
	AMateria* createMateria(const std::string& ctype);

	void init_m();
	void del_m();

	private:
	AMateria *_m[4];
};

#endif
