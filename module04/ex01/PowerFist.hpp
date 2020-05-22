#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
	public:
	PowerFist();
	virtual ~PowerFist();
	PowerFist(const PowerFist& powerFist);
	void operator = (const PowerFist& powerFist);

	virtual void attack() const;

	private:
};

#endif
