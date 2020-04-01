#ifndef SQUAD_HPP
#define SQUAD_HPP

#include <iostream>
#include <string>
#include "ISquad.hpp"

class SquadList
{
	public:
	ISpaceMarine *_marine;
	SquadList *next;
	int _n;
};

class Squad: public ISquad
{
	public:
	Squad();
	~Squad();
	Squad(const ISquad& squad);
	void operator = (const ISquad& squad);

	int getCount() const;
	ISpaceMarine* getUnit(int n) const;
	int push(ISpaceMarine* spaceMarine);

	private:
	int _count;
	SquadList *_squad;
};

#endif
