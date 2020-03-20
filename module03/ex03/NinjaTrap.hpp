#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap: public ClapTrap
{
	public:
	NinjaTrap(std::string name);
	~NinjaTrap();
	
	void ninjaShoebox(FragTrap& clapTrap);
	void ninjaShoebox(ScavTrap& clapTrap);
	void ninjaShoebox(NinjaTrap& clapTrap);	
};

#endif
