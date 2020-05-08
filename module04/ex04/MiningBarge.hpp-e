#ifndef MININGBARGE_HPP
#define MININGBARGE_HPP

#include <iostream>
#include <string>
#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"

class IAsteroid;
class IMiningLaser;

class MiningBarge
{
	public:
	MiningBarge();
	~MiningBarge();
	MiningBarge(const MiningBarge& miningBarge);
	void operator = (const MiningBarge& miningBarge);

	void equip(IMiningLaser*);
	void mine(IAsteroid*) const;

	private:
	IMiningLaser* _hardPoints[4];
};

#endif
