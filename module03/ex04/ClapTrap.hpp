#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

class ClapTrap
{
	public:
	ClapTrap(std::string name, unsigned int, unsigned int, unsigned int,
	unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
	ClapTrap(const ClapTrap& ori);
	void operator = (const ClapTrap& ori);
	virtual ~ClapTrap();

	virtual void rangedAttack(const std::string& target);
	virtual void meleeAttack(const std::string& target);
	virtual void takeDamage(unsigned int ammount);
	virtual void beRepaired(unsigned int ammount);

	protected:
	std::string		_name;
	unsigned int 	_hitPoints;
	unsigned int 	_maxHitPoints;
	unsigned int 	_energyPoints;
	unsigned int	_maxEnergyPoints;
	unsigned int 	_level;
	unsigned int 	_meleeDamage;
	unsigned int 	_rangedDamage;
	int				_damageReduction;
};

#endif
