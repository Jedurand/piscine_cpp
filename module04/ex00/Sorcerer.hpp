#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
	public:
	Sorcerer(std::string name = "Robert", std::string title = "Sorcerer");
	~Sorcerer();
	Sorcerer(const Sorcerer& sorcerer);
	void operator = (const Sorcerer& sorcerer);

	std::string announce() const;
	void polymorph(const Victim& victim);

	private:
	std::string _name;
	std::string _title;
};

std::ostream& operator << (std::ostream& out, const Sorcerer& sorcerer);   

#endif
