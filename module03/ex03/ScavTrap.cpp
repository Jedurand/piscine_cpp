#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap constructor called\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called\n";
}

std::string ScavTrap::randomizeChallenge()
{
	std::string 	random;
	int		seed;

	seed = std::rand() % (6 - 1) + 1;
	if (seed == 1)
		return ("NIIIQUUE TA MEEERE");
	if (seed == 2)
		return ("I'm 42 parrallels universes ahead of you");
	if (seed == 3)
		return ("COMPILATION ERROR");
	if (seed == 4)
		return ("HAHAHAHHA");
	if (seed == 5)
		return ("HELLO GENTLEMEN, THIS IS MAMBO NUMBER 5");
	else
		return ("-Wall -Wextra -Werror");
}

void ScavTrap::challengeNewcomer()
{
	std::cout << _name + ": " + randomizeChallenge() << std::endl;
}
	
