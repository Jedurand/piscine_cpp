#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name): ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5), FragTrap(name), NinjaTrap(name)
{
	std::cout << "SuperTrap constructor called\n";
}

SuperTrap::SuperTrap(const SuperTrap& superTrap): ClapTrap(superTrap._name, superTrap._hitPoints,
superTrap._maxHitPoints, superTrap._energyPoints, superTrap._maxEnergyPoints, superTrap._level,
superTrap._meleeDamage, superTrap._rangedDamage, superTrap._damageReduction),
FragTrap(superTrap), NinjaTrap(superTrap)
{
	std::cout << "SuperTrap copy constructor called\n";
}

void SuperTrap::operator = (const SuperTrap& ori)
{
	std::srand(std::time(NULL));
	std::cout << "SuperTrap equal overload called\n";
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

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap destructor called\n";
}

void SuperTrap::print_test()
{
	std::cout << "HitPoints: " << _hitPoints << " Energy: " << _energyPoints << std::endl;
	std::cout << "Melee: " << _meleeDamage << " Ranged: " << _rangedDamage << std::endl;
}
