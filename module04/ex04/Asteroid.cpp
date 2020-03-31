#include "Asteroid.hpp"

Asteroid::Asteroid()
{
	_name = "asteroid";
}

Asteroid::~Asteroid()
{
}

Asteroid::Asteroid(const Asteroid& asteroid)
{
	_name = asteroid._name;
}

void Asteroid::operator = (const Asteroid& asteroid)
{
	_name = asteroid._name;
}

std::string Asteroid::getName() const
{
	return (_name);
}

std::string Asteroid::beMined(DeepCoreMiner* dcm) const
{
	return ("Dragonite");
}

std::string Asteroid::beMined(StripMiner* sm) const
{
	return ("Flavium");
}
