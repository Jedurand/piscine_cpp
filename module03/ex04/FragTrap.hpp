#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
	FragTrap(std::string name);
	FragTrap(const FragTrap&);
	void operator = (const FragTrap&);
	~FragTrap();

	std::string randomizeAttack();
	unsigned int randomizeDamage();
	void vaulthunter_dot_exe(const std::string& target);
};

#endif
