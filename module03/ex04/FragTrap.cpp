#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap constructor called\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called\n";
}

std::string FragTrap::randomizeAttack()
{
	std::string 	random;
	int		seed;

	seed = std::rand() % (6 - 1) + 1;
	if (seed == 1)
		return ("Coup de poele a frire");
	if (seed == 2)
		return ("Pourpaleeeeeree");
	if (seed == 3)
		return ("Down smash");
	if (seed == 4)
		return ("Piki fireeee");
	if (seed == 5)
		return ("Mambo number 5");
	else
		return ("-Wall -Wextra -Werror");
}

unsigned int FragTrap::randomizeDamage()
{
	int seed = std::rand() % (_meleeDamage * 2);
	seed *= (_level * 1.1);
	return (seed);
}

void FragTrap::vaulthunter_dot_exe(const std::string& target)
{
	if (_energyPoints < 25)
	{
		std::cout << "Je suis a plat\n";
		return ;
	}
	std::cout << _name + " execute vaulthunter_dot_exe:\n";
	std::cout << randomizeAttack() + " fait " << randomizeDamage() << " damages at " << target << std::endl;
	_energyPoints -= 25;
}
