#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	public:
	Weapon(std::string type = "Normal club");
	std::string&  	getType();
	void		setType(std::string type = "Normal club");	

	private:
	std::string _type;
};

#endif

