#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
#include <string>

class  AWeapon
{
	public:
	AWeapon(const std::string& name, int apcost, int damage);
	virtual ~AWeapon();
	AWeapon(const AWeapon& aWeapon);
	void operator = (const AWeapon& aWeapon);

	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;

	private:
	std::string _name;
	int _apcost;
	int _damage;
};
#endif
