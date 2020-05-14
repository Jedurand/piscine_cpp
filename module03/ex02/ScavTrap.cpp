#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "ScavTrap constructor called\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& ori): ClapTrap(ori)
{
	std::srand(std::time(NULL));
	std::cout << "ScavTrap copy Constructor called\n";
}

void ScavTrap::operator = (const ScavTrap& ori)
{
	std::srand(std::time(NULL));
	std::cout << "ScavTrap equal overload called\n";
	_name = ori._name;
	_hitPoints = ori._hitPoints;
	_maxHitPoints = ori._maxHitPoints;
	_energyPoints = ori._energyPoints;
	_maxEnergyPoints = ori._maxEnergyPoints;
	_level = ori._level;
	_meleeDamage = ori._meleeDamage;
	_rangedDamage = ori._rangedDamage;
	_damageReduction = ori._damageReduction;
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
