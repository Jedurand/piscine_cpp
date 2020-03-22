#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* Teleports from space *\n";
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back ...\n";
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& assaultTerminator)
{	
}

void AssaultTerminator::operator = (const AssaultTerminator& assaultTerminator)
{
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. Purify it!\n";
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *\n";
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *\n";
}

ISpaceMarine* AssaultTerminator::clone() const
{
	AssaultTerminator *clone = new(AssaultTerminator);

	return (clone);
}

