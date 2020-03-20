#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	std::srand(std::time(nullptr));
	std::cout << "Constructor called\n";
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

FragTrap::FragTrap(const FragTrap& ori)
{
	std::srand(std::time(nullptr));
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

void FragTrap::operator = (const FragTrap& ori)
{
	std::srand(std::time(nullptr));
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

FragTrap::~FragTrap()
{
	std::cout << "Destrutor called\n";
}

void FragTrap::rangedAttack(const std::string& target)
{
	std::cout << "Fr4g-TP " + _name + " attaque " + target + " a distance, causant " << _rangedDamage << " points de degats\n";
}

void FragTrap::meleeAttack(const std::string& target)
{
	std::cout << "Fr4g-TP " + _name + " attaque " + target + " au cac, causant " << _meleeDamage << " points de degats\n";
}

void FragTrap::takeDamage(unsigned int ammount)
{
	if ((ammount - _damageReduction) <= _hitPoints)
		_hitPoints -= (ammount - _damageReduction);
	else
		_hitPoints = 0;
	std::cout << "Aiiiiiiiiiiiiiiiiie, ... ANALYSING ... REMAINING HITPOINTS: " << _hitPoints << std::endl;
}

void FragTrap::beRepaired(unsigned int ammount)
{
	if (ammount + _hitPoints <= _maxHitPoints)
		_hitPoints += ammount;
	else
		_hitPoints = _maxHitPoints;
	std::cout << "Je me lubrifie !!! ... Hit points: " << _hitPoints << std::endl;
}

std::string FragTrap::randomizeAttack()
{
	std::string 	random;
	int		seed;

	seed = std::rand() % (6 - 1) + 1;
	if (seed == 1)
		return ("Coup de poele a frire");
	if (seed == 2)
		return ("Pourpaleeeeeree");
	if (seed == 3)
		return ("Down smash");
	if (seed == 4)
		return ("Piki fireeee");
	if (seed == 5)
		return ("Mambo number 5");
	else
		return ("-Wall -Wextra -Werror");
}

unsigned int FragTrap::randomizeDamage()
{
	int seed = std::rand() % (_meleeDamage * 2);
	seed *= (_level * 1.1);
	return (seed);
}

void FragTrap::vaulthunter_dot_exe(const std::string& target)
{
	if (_energyPoints < 25)
	{
		std::cout << "Je suis a plat\n";
		return ;
	}
	std::cout << _name + " execute vaulthunter_dot_exe:\n";
	std::cout << randomizeAttack() + " fait " << randomizeDamage() << " damages\n";
	_energyPoints -= 25;
}
