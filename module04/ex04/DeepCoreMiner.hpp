#ifndef DEEPCOREMINER_HPP
#define DEEPCOREMINER_HPP

#include <iostream>
#include <string>
#include "IMiningLaser.hpp"


class IMiningLaser;
class IAsteroid;
class DeepCoreMiner: public IMiningLaser
{
	public:
	DeepCoreMiner();
	~DeepCoreMiner();
	DeepCoreMiner(const DeepCoreMiner& deepCoreMiner);
	void operator = (const DeepCoreMiner& deepCoreMiner);

	void mine(IAsteroid* asteroid);
};

#endif
