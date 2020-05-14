#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name, unsigned int hp, unsigned int maxhp, unsigned int mana,
unsigned int maxmana, unsigned int level, unsigned int melee, unsigned int ranged,
unsigned int armor)
{
	std::srand(std::time(NULL));
	std::cout << "ClapTrap Constructor called\n";
	_name = name;
	_hitPoints = hp;
	_maxHitPoints = maxhp;
	_energyPoints = mana;
	_maxEnergyPoints = maxmana;
	_level = level;
	_meleeDamage = melee;
	_rangedDamage = ranged;
	_damageReduction = armor;
}

ClapTrap::ClapTrap(const ClapTrap& ori)
{
	std::srand(std::time(NULL));
	std::cout << "ClapTrap copy Constructor called\n";
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
	std::cout << "ClapTrap equal overload called\n";
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
	std::cout << _name + " attaque " + target + " a distance, causant " << _rangedDamage << " points de degats\n";
}

void ClapTrap::meleeAttack(const std::string& target)
{
	std::cout << _name + " attaque " + target + " au cac, causant " << _meleeDamage << " points de degats\n";
}

void ClapTrap::takeDamage(unsigned int ammount)
{
	int damage;

	damage = ammount - _damageReduction;
	if (damage < 0)
		damage = 0;
	if (damage <= _hitPoints)
		_hitPoints -= damage;
	else
		_hitPoints = 0;
	std::cout << _name << ": ";
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
