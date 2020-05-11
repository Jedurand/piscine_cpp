#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include "ZombieHorde.hpp"

void	test_leaks()
{
	ZombieHorde zh2(10);
	zh2.announce();
}

int main()
{
	ZombieHorde *zh = new ZombieHorde(5);
	zh->announce();
	delete(zh);
	ZombieHorde zh2(15);
	zh2.announce();
}
