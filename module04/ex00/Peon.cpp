#include "Peon.hpp"

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog\n";
}

Peon::~Peon()
{
	std::cout << "Bleauark...\n";
}

Peon::Peon(const Peon& peon): Victim(peon)
{
	std::cout << "Zog zog\n";
}

void Peon::operator = (const Peon& peon)
{
	std::cout << "Zog zog\n";
}

void Peon::getPolymorphed() const
{
	std::cout << _name << " was just polymorphed into a pink pony\n";
}
