#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
	public:
	SuperTrap(std::string name);
	SuperTrap(const SuperTrap& superTrap);
	void operator = (const SuperTrap& ori);
	~SuperTrap();

	void print_test();
	/*void meleeAttack(std::string const &target);
	void rangedAttack(std::string const &target);
	void takeDamage(unsigned int);
	void beRepaired(unsigned int);*/
};

#endif
