#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
	_type = randomize();
}

Zombie::~Zombie()
{
}

std::string randomize()
{
	int size(std::rand() % (10 - 1) + 1);
	int i(0);
	char c;
	std::string s;

	while (i < size)
	{
		c = char(std::rand() % (122 - 97) + 97);
		s.push_back(c);
		i++;
	}
	return (s);
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
