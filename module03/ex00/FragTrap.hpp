#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

class FragTrap
{
	public:
	FragTrap(std::string name);
	FragTrap(const FragTrap &ori);
	~FragTrap();
	
	void operator = (const FragTrap& ori);

	void rangedAttack(const std::string& target);
	void meleeAttack(const std::string& target);
	void takeDamage(unsigned int ammount);
	void beRepaired(unsigned int ammount);

	std::string randomizeAttack();
	unsigned int randomizeDamage();
	void vaulthunter_dot_exe(const std::string& target);

	private:
	std::string	_name;
	unsigned int 	_hitPoints;
	unsigned int 	_maxHitPoints;
	unsigned int 	_energyPoints;
	unsigned int	_maxEnergyPoints;
	unsigned int 	_level;
	unsigned int 	_meleeDamage;
	unsigned int 	_rangedDamage;
	int		_damageReduction;
};
		
