#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name): FragTrap(name), NinjaTrap(name)
{
	std::cout << "SuperTrap constructor called\n";
}


SuperTrap::SuperTrap(const SuperTrap& superTrap): FragTrap(superTrap), NinjaTrap(superTrap)
{
	std::cout << "SuperTrap copy constructor called\n";
	/*_hitPoints = superTrap._hitPoints;
	_maxHitPoints = superTrap._maxHitPoints;
	_energyPoints = superTrap._energyPoints;
	_maxEnergyPoints = superTrap._maxEnergyPoints;
	_level = superTrap._level;
	_meleeDamage = superTrap._meleeDamage;
	_rangedDamage = superTrap._rangedDamage;
	_damageReduction = superTrap._damageReduction; */
}
/*
void SuperTrap::operator = (const SuperTrap& ori)
{
	std::cout << "SuperTrap egal operator called\n";
	SuperTrap::(*this) = ori;
	*this = ori;
}*/


void    SuperTrap::rangedAttack(std::string const &target)
{
    FragTrap::rangedAttack(target);
}

void    SuperTrap::meleeAttack(std::string const &target)
{
    NinjaTrap::meleeAttack(target);
}

void SuperTrap::takeDamage(unsigned int ammount)
{
	FragTrap::takeDamage(ammount);
}

void SuperTrap::beRepaired(unsigned int ammount)
{
	FragTrap::beRepaired(ammount);
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap destructor called\n";
}
/*
void SuperTrap::print_test()
{
	std::cout << "HitPoints: " << _hitPoints << " Energy: " << _energyPoints << std::endl;
	std::cout << "Melee: " << _meleeDamage << " Ranged: " << _rangedDamage << std::endl;
}
*/
