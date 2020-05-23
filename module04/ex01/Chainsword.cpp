#include "Chainsword.hpp"

Chainsword::Chainsword(): AWeapon("Chainsword", 10, 35)
{
	std::cout << "Chainsword created\n";
}

Chainsword::~Chainsword()
{
	std::cout << "Chainsword deleted\n";
}

Chainsword::Chainsword(const Chainsword& chainsword): AWeapon(chainsword)
{
	std::cout << "Chainsword copied\n";
}

void Chainsword::operator = (const Chainsword& chainsword)
{
	(void)chainsword;
	std::cout << "Chainsword copied\n";
}

void Chainsword::attack() const
{
	std::cout << "* SHLAK SHLAK *\n";
}
