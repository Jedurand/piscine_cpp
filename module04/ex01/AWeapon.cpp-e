#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string& name, int apcost, int damage)
{
	_name = name;
	_apcost = apcost;
	_damage = damage;
}

AWeapon::~AWeapon()
{
	std::cout << "Weapon " << _name << " destroyed\n";
}

AWeapon::AWeapon(const AWeapon& aWeapon)
{
	_name = aWeapon._name;
	_apcost = aWeapon._apcost;
	_damage = aWeapon._damage;
}

void AWeapon::operator = (const AWeapon& aWeapon)
{
	_name = aWeapon._name;
	_apcost = aWeapon._apcost;
	_damage = aWeapon._damage;
}

std::string AWeapon::getName() const
{
	return (_name);
}

int AWeapon::getAPCost() const
{
	return (_apcost);
}

int AWeapon::getDamage() const
{
	return (_damage);
}
