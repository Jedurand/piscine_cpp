#ifndef CHAINSWORD_HPP
#define CHAINSWORD_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class Chainsword: public AWeapon
{
	public:
	Chainsword();
	virtual ~Chainsword();
	Chainsword(const Chainsword& chainsword);
	void operator = (const Chainsword& chainsword);

	virtual void attack() const;

	private:
};

#endif
