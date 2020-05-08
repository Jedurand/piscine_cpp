#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream>

class Brain
{
	public:
	Brain();
	std::string iddentify() const;
	int testIq() const;

	private:
	int _iq;
};

#endif
