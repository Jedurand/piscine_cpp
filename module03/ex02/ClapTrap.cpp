#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::srand(std::time(NULL));
	std::cout << "ClapTrap Constructor called\n";
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

ClapTrap::ClapTrap(const ClapTrap& ori)
{
	std::srand(std::time(NULL));
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

void ClapTrap::operator = (const ClapTrap& ori)
{
	std::srand(std::time(NULL));
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

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destrutor called\n";
}

void ClapTrap::rangedAttack(const std::string& target)
{
	std::cout << "Fr4g-TP " + _name + " attaque " + target + " a distance, causant " << _rangedDamage << " points de degats\n";
}

void ClapTrap::meleeAttack(const std::string& target)
{
	std::cout << "Fr4g-TP " + _name + " attaque " + target + " au cac, causant " << _meleeDamage << " points de degats\n";
}

void ClapTrap::takeDamage(unsigned int ammount)
{
	if ((ammount - _damageReduction) <= _hitPoints)
		_hitPoints -= (ammount - _damageReduction);
	else
		_hitPoints = 0;
	std::cout << "Aiiiiiiiiiiiiiiiiie, ... ANALYSING ... REMAINING HITPOINTS: " << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int ammount)
{
	if (ammount + _hitPoints <= _maxHitPoints)
		_hitPoints += ammount;
	else
		_hitPoints = _maxHitPoints;
	std::cout << "Je me lubrifie !!! ... Hit points: " << _hitPoints << std::endl;
}

