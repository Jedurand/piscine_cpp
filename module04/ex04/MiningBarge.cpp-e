#include "MiningBarge.hpp"

MiningBarge::MiningBarge()
{
	for (int i = 0; i < 4; i++)
		_hardPoints[i] = nullptr;	
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
		if (_hardPoints[i] == nullptr)
		{
			_hardPoints[i] = laser;
			break ;
		}
	}
}

void MiningBarge::mine(IAsteroid* asteroid) const
{
	for (int i = 0; i < 4 && _hardPoints[i] != nullptr; i++)
	{
		_hardPoints[i]->mine(asteroid);
	}
}
