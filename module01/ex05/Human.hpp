#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human
{
	public:
	Human();
	void *iddentify();
	void *iddentifier();
	Brain& getBrain();

	private:
	Brain _brain;
};

#endif
