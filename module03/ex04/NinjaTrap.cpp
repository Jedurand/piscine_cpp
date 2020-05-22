#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
	std::cout << "NinjaTrap Constructor called\n";
}


NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap Destrutor called\n";
}

NinjaTrap::NinjaTrap(const NinjaTrap& ori): ClapTrap(ori)
{
	std::srand(std::time(NULL));
	std::cout << "NinjaTrap copy constructor called\n";
}

void NinjaTrap::operator = (const NinjaTrap& ori)
{
	std::srand(std::time(NULL));
	std::cout << "NinjaTrap egal overload called\n";
	_name = ori._name;
	_hitPoints = ori._hitPoints;
	_maxHitPoints = ori._maxHitPoints;
	_energyPoints = ori._energyPoints;
	_maxEnergyPoints = ori._maxEnergyPoints;
	_level = ori._level;
	_meleeDamage = ori._meleeDamage;
	_rangedDamage = ori._rangedDamage;
	_damageReduction = ori._damageReduction;
}

void NinjaTrap::ninjaShoebox(FragTrap& clapTrap)
{
	unsigned int damage = _rangedDamage * 5 + (_level * 10);
	std::cout << _name + " lance RAAASENGAN et fait " << damage <<
	"degats a sa cible" << std::endl;
	clapTrap.takeDamage(damage);
}

void NinjaTrap::ninjaShoebox(ScavTrap& clapTrap)
{
	unsigned int damage = _meleeDamage * 1 + (_level * 10);
	clapTrap.challengeNewcomer();
	std::cout << _name + " utilise la technique du hokuto a pain et fait " << damage <<  "degats\n";
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
