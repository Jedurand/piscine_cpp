#include "MiningBarge.hpp"

MiningBarge::MiningBarge()
{
	for (int i = 0; i < 4; i++)
		_hardPoints[i] = NULL;	
}

MiningBarge::~MiningBarge()
{
}

MiningBarge::MiningBarge(const MiningBarge& miningBarge)
{
	for (int i = 0; i < 4; i++)
		_hardPoints[i] = miningBarge._hardPoints[i];
}

void MiningBarge::operator = (const MiningBarge& miningBarge)
{
	for (int i = 0; i < 4; i++)
		_hardPoints[i] = miningBarge._hardPoints[i];

}

void MiningBarge::equip(IMiningLaser* laser)
{
	for (int i = 0; i < 4; i++)
	{
		if (_hardPoints[i] == NULL)
		{
			_hardPoints[i] = laser;
			break ;
		}
	}
}

void MiningBarge::mine(IAsteroid* asteroid) const
{
	for (int i = 0; i < 4 && _hardPoints[i] != NULL; i++)
	{
		_hardPoints[i]->mine(asteroid);
	}
}
