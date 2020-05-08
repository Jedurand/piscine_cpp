#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
	_type = "Generic boring Zombie";
}

Zombie::~Zombie()
{
	std::cout << "Zombie: " << _name << " has been destroyed\n";
}

void Zombie::advert()
{
	std::cout << "<" + _name + " " + "(" + _type + ")> Brrrrrrraaaaaaaaiiiiinnssss\n";
}

void Zombie::do_type(std::string type)
{
	_type = type;
}

void Zombie::announce()
{
	std::cout << "I am " + _name + " of type " + _type + "\n";
}
