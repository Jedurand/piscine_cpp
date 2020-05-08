#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include <ostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	public:
	Character(std::string name = "moi");
	~Character();
	Character(const Character& character);
	void operator = (const Character& character);

	void recoverAp();
	void equip(AWeapon* weapon);
	void attack(Enemy* enemy);

	std::string getName() const;
	int getAp() const;
	void printInfo() const;
	std::string carries() const;	

	private:
	std::string _name;
	int _ap;
	AWeapon *_weapon;
};

std::ostream& operator << (std::ostream& out, const Character& character);

#endif
