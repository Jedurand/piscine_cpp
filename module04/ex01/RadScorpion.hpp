#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include <iostream>
#include <string>
#include "Enemy.hpp"

class RadScorpion: public virtual Enemy
{
	public:
	RadScorpion();
	virtual ~RadScorpion();
	RadScorpion(const RadScorpion& radScorpion);
	void operator = (const RadScorpion& radScorpion);

	private:
};

#endif
