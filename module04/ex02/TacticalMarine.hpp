#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
	public:
	TacticalMarine();
	~TacticalMarine();
	TacticalMarine(const TacticalMarine& tacticalMarine);
	void operator = (const TacticalMarine& tacticalMarine);
	
	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
