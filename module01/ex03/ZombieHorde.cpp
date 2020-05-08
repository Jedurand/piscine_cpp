#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	_n = n;

	std::srand(std::time(nullptr));
	_lst = new Zombie[n];
}

ZombieHorde::~ZombieHorde()
{
	delete[]_lst;
}

void ZombieHorde::announce()
{
	int i(0);

	while (i < _n)
	{
		_lst[i].announce();
		i++;
	}
}
