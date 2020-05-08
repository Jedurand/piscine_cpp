#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

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
	void do_type(std::string type = "Generic boring Zombie");
	void announce();

	private:
	std::string _type;
	std::string _name;
};

#endif
