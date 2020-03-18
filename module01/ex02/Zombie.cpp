#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
	_type = "None";
}

void Zombie::advert()
{
	std::cout << "<" + _name + " " + "(" + _type + ")> Brrrrrrraaaaaaaaiiiiinnssss\n";
}

void Zombie::do_type(std::string type)
{
	_type = type;
}

void Zombie::annouce()
{
	std::cout << "I am " + _name + " of type " + _type + "\n";
}

ZombieEvent::ZombieEvent()
{
}

void ZombieEvent::setZombieType(Zombie *zombie, std::string type)
{
	if (type == "")
		std::getline(std::cin, type);
	zombie->do_type(type);
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *new_zombie = new Zombie(name);
	return (new_zombie);
}	

std::string ZombieEvent::randomize()
{
	std::srand(std::time(nullptr));
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
	random.annouce();	
}
