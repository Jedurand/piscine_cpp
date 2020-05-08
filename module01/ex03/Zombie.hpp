#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

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

#endif
