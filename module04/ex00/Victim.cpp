#include "Victim.hpp"

Victim::Victim(std::string name)
{
	_name = name;
	std::cout << "A random victim called " << _name << " just appeared\n";
}

Victim::~Victim()
{
	std::cout << "The victim " << _name << " died for no apparent reasons\n";
}

Victim::Victim(const Victim& victim)
{
	_name = victim._name;
	std::cout << "A random victim called " << _name << " just appeared\n";
}

void Victim::operator = (const Victim& victim)
{
	_name = victim._name;
	std::cout << "A random victim called " << _name << " just appeared\n";
}

std::string Victim::announce() const
{ 
	return ("I am " + _name + " and i like otters!\n");
}	

std::ostream& operator << (std::ostream& out, const Victim& victim)
{
	return (out << victim.announce());
}

void Victim::getPolymorphed() const
{
	std::cout << _name << " was just polymorphed into a cute little sheep\n";
}
