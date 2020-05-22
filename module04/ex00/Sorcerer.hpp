#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
	public:
	Sorcerer(std::string name, std::string title);
	~Sorcerer();
	Sorcerer(const Sorcerer& sorcerer);
	void operator = (const Sorcerer& sorcerer);

	std::string announce() const;
	void polymorph(const Victim& victim) const;

	private:
	std::string _name;
	std::string _title;
};

std::ostream& operator << (std::ostream& out, const Sorcerer& sorcerer);

#endif
