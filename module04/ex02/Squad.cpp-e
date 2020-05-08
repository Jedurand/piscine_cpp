#include "Squad.hpp"

Squad::Squad(): ISquad()
{
	_count = 0;
	_squad = nullptr;
	std::cout << "A squad is born\n";
}

Squad::~Squad()
{
	SquadList *squadB;

	if (_count == 0)
		return ;
	for (int i = 0; i < _count; i++)
	{
		squadB = _squad->next;
		delete(_squad->_marine);
		delete(_squad);
		_squad = squadB;
	}
}

Squad::Squad(const ISquad& squad)
{
//	_count = squad.getCount();
	if (squad.getCount() == 0)
		_squad = nullptr;
	for (int i = 0; i < squad.getCount(); i++)
	{
		push(squad.getUnit(i));
	}	
}

void Squad::operator = (const ISquad& squad)
{
	SquadList *squadB;

	if (_count > 0)
	{
		std::cout << "bonjour\n";
		for (int i = 0; i < _count; i++)
		{
			squadB = _squad->next;
			delete(_squad->_marine);
			delete(_squad);
			_squad = squadB;
		}
	}
	_squad = nullptr;
	_count = 0;
	for (int i = 0; i < squad.getCount(); i++)
		push(squad.getUnit(i));
}

int Squad::push(ISpaceMarine* spaceMarine)
{
	if (spaceMarine == nullptr)
		return (0);
	if (_squad == nullptr)
	{
		_squad = new SquadList;
		_squad->_marine = spaceMarine;
		_squad->next = nullptr;
		_squad->_n = 0;
		_count += 1;
		std::cout << "New member in the squad\n";
		return (1);
	}

	SquadList *squadB = _squad;
	while (squadB->next != nullptr)
	{
		squadB = squadB->next;
		if (squadB->_marine == spaceMarine)
			return (0);
	}
	squadB->next = new SquadList;
	squadB = squadB->next;
	squadB->_marine = spaceMarine;
	squadB->next = nullptr;
	squadB->_n = _count;
	_count += 1;
	std::cout << "New member in the squad, welcome brother\n";
	return (1);
}

int Squad::getCount() const
{	
	return (_count);
}

ISpaceMarine* Squad::getUnit(int n) const
{
	if (n >= _count || n < 0)
		return (nullptr);
	SquadList *squadB = _squad;
	for (int i = 0; i < n; i++)
		squadB = squadB->next;
	return (squadB->_marine);
}

