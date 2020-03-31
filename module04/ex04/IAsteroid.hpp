#ifndef IASTEROID_HPP
#define IASTEROID_HPP

#include <iostream>
#include <string>

class IMingLaser;
class StripMiner;
class DeepCoreMiner;
class IAsteroid
{
	public:
	virtual ~IAsteroid() {};

	virtual std::string beMined(StripMiner* dcm) const = 0;
	virtual std::string beMined(DeepCoreMiner* sm) const = 0;
	virtual std::string getName() const = 0;
};

#endif
