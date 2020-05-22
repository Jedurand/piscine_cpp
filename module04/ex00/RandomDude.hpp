#ifndef RANDOMDUDE_HPP
#define RANDOMDUDE_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class RandomDude: public Victim
{
	public:
	RandomDude(std::string name = "henri");
	virtual ~RandomDude();
	RandomDude(const RandomDude& randomDude);
	void operator = (const RandomDude& randomDude);

	void getPolymorphed() const;

	private:
};

#endif
