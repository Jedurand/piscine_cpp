#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{
	public:
	AssaultTerminator();
	~AssaultTerminator();
	AssaultTerminator(const AssaultTerminator& assaultTerminator);
	void operator = (const AssaultTerminator& assaultTerminator);
	
	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
