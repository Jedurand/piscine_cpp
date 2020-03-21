#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include <iostream>
#include <string>
#include "Enemy.hpp"

class SuperMutant: public Enemy
{
	public:
	SuperMutant();
	~SuperMutant();
	SuperMutant(const SuperMutant& superMutant);
	void operator = (const SuperMutant& superMutant);

	virtual void takeDamage(int damage);

	private:
};

#endif
