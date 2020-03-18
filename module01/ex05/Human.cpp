#include "Human.hpp"

Human::Human()
{
}

void *Human::iddentifier()
{
	return (this->_brain.iddentify());
}

void *Human::iddentify()
{
	return (iddentifier());
}

Brain& Human::getBrain()
{
	return (_brain);
}

