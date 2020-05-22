#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
	public:
	PlasmaRifle();
	virtual ~PlasmaRifle();
	PlasmaRifle(const PlasmaRifle& plasmaRifle);
	void operator = (const PlasmaRifle& plasmaRifle);

	virtual void attack() const;

	private:
};

#endif
