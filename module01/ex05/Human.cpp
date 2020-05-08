#include "Human.hpp"

Human::Human()
{
}

std::string Human::iddentify() const
{
	return (this->_brain.iddentify());
}

const Brain& Human::getBrain() const
{
	return (_brain);
}
