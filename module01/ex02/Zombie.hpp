#include <iostream>
#include <ctime>
#include <cctype>
#include <cstdlib>
#include <string>

class Zombie
{
	public:
	Zombie(std::string name = "");
	void advert();
	void do_type(std::string type);
	void annouce();

	private:
	std::string _type;
	std::string _name;
};

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

class ZombieHorde
{
	public:
	ZombieHorde(int n);
	void announce();

	private:
	Zombie *_lst;
	int _n;
};
