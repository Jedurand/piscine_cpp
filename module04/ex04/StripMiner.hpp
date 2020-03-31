#ifndef STRIPMINER_HPP
#define STRIPMINER_HPP

#include <iostream>
#include <string>
#include "IMiningLaser.hpp"

class IMiningLaser;
class IAsteroid;
class StripMiner: public IMiningLaser
{
	public:
	StripMiner();
	~StripMiner();
	StripMiner(const StripMiner& stripMiner);
	void operator = (const StripMiner& stripMiner);

	void mine(IAsteroid* asteroid);
};

#endif
