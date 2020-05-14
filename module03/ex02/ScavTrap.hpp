#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap&);
	void operator = (const ScavTrap&);
	~ScavTrap();

	std::string randomizeChallenge();
	void challengeNewcomer();
};

#endif
