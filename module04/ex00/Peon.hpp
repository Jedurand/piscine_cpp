#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon: public Victim
{
	public:
	Peon(std::string name = "richard");
	virtual ~Peon();
	Peon(const Peon& peon);
	void operator = (const Peon& peon);

	void getPolymorphed() const;

	private:
};

#endif
