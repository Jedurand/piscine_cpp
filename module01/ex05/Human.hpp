#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human
{
	public:
	Human();
	std::string iddentify() const;
	const Brain& getBrain() const;

	private:
	const Brain _brain;
};

#endif
