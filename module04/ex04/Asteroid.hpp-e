#ifndef ASTEROID_HPP
#define ASTEROID_HPP

#include <iostream>
#include <string>
#include "IAsteroid.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"

class Asteroid: public IAsteroid
{
	public:
	Asteroid();
	~Asteroid();
	Asteroid(const Asteroid& asteroid);
	void operator = (const Asteroid& asteroid);

	std::string getName() const;
	std::string beMined(DeepCoreMiner* dcm) const;
	std::string beMined(StripMiner* sm) const;

	private:
	std::string _name;
};

#endif
