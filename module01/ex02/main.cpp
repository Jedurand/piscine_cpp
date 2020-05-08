#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent ze;

	Zombie *z1 = ze.newZombie("richard");
	ze.setZombieType(z1, "lurker");
	Zombie *z2 = ze.newZombie("henri");
	ze.setZombieType(z2, "Tanker");
	z1->advert();
	z2->advert();
	delete(z1);
	delete(z2);
	ze.randomChum();
	ze.randomChum();
//	while (1);
}
