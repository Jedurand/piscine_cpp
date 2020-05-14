#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	std::srand(std::time(NULL));
	std::cout << "Scav Constructor called\n";
	_name = name;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeDamage = 30;
	_rangedDamage = 20;
	_damageReduction = 5;
}

ScavTrap::ScavTrap(const ScavTrap& ori)
{
	std::srand(std::time(NULL));
	std::cout << "ScavTrap Copy Constructor called\n";
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

void ScavTrap::operator = (const ScavTrap& ori)
{
	std::srand(std::time(NULL));
	std::cout << "ScavTrap egal overload called\n";
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

ScavTrap::~ScavTrap()
{
	std::cout << "Scav Destrutor called\n";
}

void ScavTrap::rangedAttack(const std::string& target)
{
	std::cout << "SCAV-TP " + _name + " attaque " + target + " a distance, causant " << _rangedDamage << " points de degats\n";
}

void ScavTrap::meleeAttack(const std::string& target)
{
	std::cout << "SCAV-TP " + _name + " attaque " + target + " au cac, causant " << _meleeDamage << " points de degats\n";
}

void ScavTrap::takeDamage(unsigned int ammount)
{
	int damage;

	damage = ammount - _damageReduction;
	if (damage < 0)
		damage = 0;
	if (damage <= _hitPoints)
		_hitPoints -= damage;
	else
		_hitPoints = 0;
	std::cout << "Aiiiiiiiiiiiiiiiiie, ... ANALYSING ... REMAINING HITPOINTS: " << _hitPoints << std::endl;
}

void ScavTrap::beRepaired(unsigned int ammount)
{
	if (ammount + _hitPoints <= _maxHitPoints)
		_hitPoints += ammount;
	else
		_hitPoints = _maxHitPoints;
	std::cout << "Je me lubrifie !!! ... Hit points: " << _hitPoints << std::endl;
}

std::string ScavTrap::randomizeChallenge()
{
	int				seed;

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
