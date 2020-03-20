#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name)
{
	std::cout << "NinjaTrap Constructor called\n";
	_name = name;
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_meleeDamage = 60;
	_rangedDamage = 5;
	_damageReduction = 0;
}

NinjaTrap::NinjaTrap(std::string name, int i): ClapTrap(name)
{
	std::cout << "NinjaTrap Constructor called\n";
	_name = name;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_meleeDamage = 60;
}	

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap Destrutor called\n";
}

void NinjaTrap::ninjaShoebox(FragTrap& clapTrap)
{
	unsigned int damage = _rangedDamage * 5 + (_level * 10);
	std::cout << _name + " lance SHURIKEN TO THE CHEST et fait " << damage << 
	"degats a sa cible" << std::endl;
	clapTrap.takeDamage(damage);
}

void NinjaTrap::ninjaShoebox(ScavTrap& clapTrap)
{
	unsigned int damage = _meleeDamage * 1 + (_level * 10);
	clapTrap.challengeNewcomer();
	std::cout << _name + " se fait passer pour un ami et poignarde sa cible " + 
	" dans le dos pour " << damage <<  "degats\n";
	clapTrap.takeDamage(damage);
}

void NinjaTrap::ninjaShoebox(NinjaTrap& clapTrap)
{
	unsigned int ammount = 10 + (_level * 10);
	unsigned int damages = 10 + (_level * 10);
	std::cout << "Les ninjas ne s'attaquent pas entre eux, ils s'offrent a boire ";
	if (std::rand() % 2 == 0)
	{
		std::cout << "mais " << _name << " a confondu les fioles et blesse "
		<< "sa cible pour " << damages << " degats\n";
		clapTrap.takeDamage(damages);
	}
	else
	{
		std::cout << ". " << "Sa cible " << "boit et se fait healer pour "
		<< ammount << " hit points\n";
		clapTrap.beRepaired(ammount);
	}
}
	
