#include "Brain.hpp"

Brain::Brain()
{
	_iq = 145;
}

void *Brain::iddentifier()
{
	void *add = this;
	return (add);
}

void *Brain::iddentify()
{
	return (iddentifier());
}		
