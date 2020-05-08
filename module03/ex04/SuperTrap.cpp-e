#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name): ClapTrap(name), FragTrap(name), NinjaTrap(name, 0)
{
	std::cout << "SuperTrap constructor called\n" << "HitPoints and energy:: "
	<< _hitPoints << " " << _energyPoints << " " << _damageReduction << std::endl;
}
SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap destructor called\n";
}

void SuperTrap::print_test()
{
	std::cout << "HitPoints: " << _hitPoints << " Energy: " << _energyPoints << std::endl;
}
