#include "Brain.hpp"

Brain::Brain()
{
	_iq = 145;
}

std::string Brain::iddentify() const
{
	std::stringstream sstream;
	sstream << this;
	return (sstream.str());
}

int Brain::testIq() const
{
	return (_iq);
}
