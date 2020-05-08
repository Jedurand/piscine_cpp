#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
	_name = name;
	_title = title;
	std::cout << _name << ", " << _title << " is born!\n";
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << " is dead. Consequences will never be the same\n";
}

Sorcerer::Sorcerer(const Sorcerer& sorcerer)
{
	_name = sorcerer._name;
	_title = sorcerer._title;
	std::cout << _name << ", " << _title << " is born!\n";
}

void Sorcerer::operator = (const Sorcerer& sorcerer)
{
	_name = sorcerer._name;
	_title = sorcerer._title;
	std::cout << _name << ", " << _title << " is born!\n";
}

std::string Sorcerer::announce() const
{ 
	return ("I am " + _name + ", " + _title + ", and i like ponies!\n");
}	

std::ostream& operator << (std::ostream&out, const Sorcerer& sorcerer)
{
	return (out << sorcerer.announce());
}

void Sorcerer::polymorph(const Victim& victim) const
{
	std::cout << _name << " just polymorphed a victim\n";
	victim.getPolymorphed();
}
