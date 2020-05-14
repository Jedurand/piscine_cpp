#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
	public:
	SuperTrap(std::string name);
	SuperTrap(const SuperTrap& superTrap);
	//void operator = (const SuperTrap& ori);
	~SuperTrap();

	void print_test();
	virtual void meleeAttack(std::string const &target);
	virtual void rangedAttack(std::string const &target);
	virtual void takeDamage(unsigned int);
	virtual void beRepaired(unsigned int);
};

#endif
