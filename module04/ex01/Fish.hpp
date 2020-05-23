#ifndef FISH_HPP
#define FISH_HPP

#include <iostream>
#include <string>
#include "Enemy.hpp"

class Fish: public virtual Enemy
{
	public:
	Fish();
	virtual ~Fish();
	Fish(const Fish& fish);

	private:
};

#endif
