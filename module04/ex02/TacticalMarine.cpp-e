#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical marine ready for action!\n";
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Arrrgh ...\n";
}

TacticalMarine::TacticalMarine(const TacticalMarine& tacticalMarine)
{
	(void)tacticalMarine;	
	std::cout << "Tactical marine ready for action!\n";
}

void TacticalMarine::operator = (const TacticalMarine& tacticalMarine)
{
	(void)tacticalMarine;
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the Holy PLOT !\n";
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *\n";
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *\n";
}

ISpaceMarine* TacticalMarine::clone() const
{
	TacticalMarine *clone = new(TacticalMarine);

	return (clone);
}

