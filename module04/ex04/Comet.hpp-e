#ifndef COMET_HPP
#define COMET_HPP

#include <iostream>
#include <string>
#include "IAsteroid.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"

class Comet: public IAsteroid
{
	public:
	Comet();
	~Comet();
	Comet(const Comet& comet);
	void operator = (const Comet& comet);

	std::string getName() const;
	std::string beMined(DeepCoreMiner* dcm) const;
	std::string beMined(StripMiner* sm) const;

	private:
	std::string _name;
};

#endif
