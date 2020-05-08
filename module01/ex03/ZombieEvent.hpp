#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
	public:
	ZombieEvent();
	void setZombieType(Zombie *zombie, std::string type = "");
	Zombie *newZombie(std::string name);
	void randomChum();
	void exterminatum();
	std::string randomize();
};

#endif
