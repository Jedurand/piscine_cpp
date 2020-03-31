#include "Comet.hpp"

Comet::Comet()
{
	_name = "Comet";
}

Comet::~Comet()
{
}

Comet::Comet(const Comet& comet)
{
	_name = comet._name;
}

void Comet::operator = (const Comet& comet)
{
	_name = comet._name;
}

std::string Comet::getName() const
{
	return (_name);
}

std::string Comet::beMined(DeepCoreMiner* dcm) const
{
	return ("Mithril");
}

std::string Comet::beMined(StripMiner* sm) const
{
	return ("Tartarite");
}
