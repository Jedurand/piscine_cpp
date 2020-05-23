#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include <iostream>
#include <string>
#include "Enemy.hpp"

class SuperMutant: public Enemy
{
	public:
	SuperMutant();
	virtual ~SuperMutant();
	SuperMutant(const SuperMutant& superMutant);

	virtual void takeDamage(int damage);

	private:
};

#endif
