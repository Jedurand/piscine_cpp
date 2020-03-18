#include "Zombie.hpp"

void	test_leaks()
{
	ZombieHorde zh2(100);
	zh2.announce();
}

int main()
{
	ZombieHorde *zh = new ZombieHorde(15);
	zh->announce();
	delete(zh);
//	ZombieHorde zh2(100);
//	zh2.announce();
	test_leaks();
	while (1);

}
