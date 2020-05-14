#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap ft1("Cl4p");
	FragTrap ft2("henri");
	FragTrap ftcpy(ft1);
	FragTrap ftcpy2 = ft1;


	std::cout << "\n------------\n";

	ft1.rangedAttack("Brick");
	ft2.meleeAttack("Handsome Jack");
	ft1.takeDamage(25);
	ft1.beRepaired(10);
	ftcpy2 = ft1;

	std::cout << "\n------------\n";
	ftcpy2.rangedAttack("Brick");
	ftcpy2.meleeAttack("Handsome Jack");
	ftcpy2.takeDamage(35);
	ftcpy2.beRepaired(50);
	ftcpy2.takeDamage(5000);

	std::cout << "\n------------\n";

	ft2.vaulthunter_dot_exe("HandsomeJack");
	ft2.vaulthunter_dot_exe("HandsomeJack");
	ft2.vaulthunter_dot_exe("HandsomeJack");
	ft2.vaulthunter_dot_exe("HandsomeJack");
	ft2.vaulthunter_dot_exe("HandsomeJack");
	ft2.vaulthunter_dot_exe("HandsomeJack");

	std::cout << "\n------------\n";

	ScavTrap st1("Sc4v");
	ScavTrap stcpy(st1);
	ScavTrap stcpy2 = st1;

	std::cout << "\n------------\n";

	st1.rangedAttack("Krieg");
	st1.challengeNewcomer();
	st1.challengeNewcomer();
	st1.challengeNewcomer();
	st1.challengeNewcomer();
	st1.challengeNewcomer();
	st1.challengeNewcomer();

	std::cout << "\n------------\n";
}
