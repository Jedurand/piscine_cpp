#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
	public:
	SuperTrap(std::string name);
	~SuperTrap();
	void print_test();
	
};

#endif
