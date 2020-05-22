#include "RandomDude.hpp"

RandomDude::RandomDude(std::string name): Victim(name)
{
	std::cout << "random Zog zog\n";
}

RandomDude::~RandomDude()
{
	std::cout << "random Bleauark...\n";
}

RandomDude::RandomDude(const RandomDude& randomDude): Victim(randomDude)
{
	std::cout << "random Zog zog\n";
}

void RandomDude::operator = (const RandomDude& randomDude)
{
	_name = randomDude._name;
	std::cout << "random Zog zog\n";
}

void RandomDude::getPolymorphed() const
{
	std::cout << _name << " was just polymorphed into a pink pony\n";
}
