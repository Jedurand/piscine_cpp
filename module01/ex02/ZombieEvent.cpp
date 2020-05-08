#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	std::srand(std::time(NULL));
}

void ZombieEvent::setZombieType(Zombie *zombie, std::string type)
{
	zombie->do_type(type);
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *new_zombie = new Zombie(name);
	return (new_zombie);
}

std::string ZombieEvent::randomize()
{
	int size(std::rand() % (10 - 1) + 1);
	int i(0);
	char c;
	std::string s;

	while (i < size)
	{
		c = char(std::rand() % (122 - 97) + 97);
		s.push_back(c);
		i++;
	}
	return (s);
}

void ZombieEvent::randomChum()
{
	Zombie random(randomize());
	random.announce();
}
