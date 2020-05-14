#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

class ScavTrap
{
	public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &ori);
	~ScavTrap();

	void operator = (const ScavTrap& ori);

	void rangedAttack(const std::string& target);
	void meleeAttack(const std::string& target);
	void takeDamage(unsigned int ammount);
	void beRepaired(unsigned int ammount);

	std::string randomizeChallenge();
	void challengeNewcomer();

	private:
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
