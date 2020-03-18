#include <iostream>
#include <ctime>
#include <cctype>
#include <cstdlib>
#include <string>

std::string randomize();

class Zombie
{
	public:
	Zombie(std::string name = randomize());
	~Zombie();
	void advert();
	void do_type(std::string type);
	void announce();

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
	std::string randomize(std::string = "");
};

class ZombieHorde
{
	public:
	ZombieHorde(int n);
	~ZombieHorde();
	void announce();
	
	private:
	Zombie *_lst;
	int _n;
};
