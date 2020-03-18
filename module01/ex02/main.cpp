#include "Zombie.hpp"

int main()
{
	ZombieEvent ze;

	Zombie *z1 = ze.newZombie("richard");
	ze.setZombieType(z1, "lurker");
	z1->advert();
	delete(z1);
	ze.randomChum();
	while (1);
}
