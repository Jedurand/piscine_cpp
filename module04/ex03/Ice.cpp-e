#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice created\n";	
}

Ice::~Ice()
{
	std::cout << "Ice destroyed\n";
}

Ice::Ice(const Ice& ice): AMateria(ice)
{
// inside AMateria(check type and return;
}

void Ice::operator = (const Ice& ice)
{
	
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}

Ice* Ice::clone() const
{
	Ice *ice = new Ice;
	return (ice);
}
	

