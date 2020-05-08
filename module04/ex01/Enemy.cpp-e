#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string type)
{
	std::cout << "Enemy spawned\n";
	_type = type;
	_hp = hp;
}

Enemy::~Enemy()
{
	std::cout << "Enemy disapeared into oblivion\n";
}

Enemy::Enemy(const Enemy& enemy)
{
	std::cout << "Enemy duplicated\n";
	_type = enemy._type;
	_hp = enemy._hp;
}

void Enemy::operator = (const Enemy& enemy)
{
	std::cout << "Enemy duplicated\n";
	_type = enemy._type;
	_hp = enemy._hp;

}

std::string Enemy::getType() const
{
	return (_type);
}

int Enemy::getHp() const
{
	return (_hp);
}

void Enemy::takeDamage(int damage)
{
	if (_hp - damage <= 0)
		_hp = 0;
	else
		_hp = _hp - damage;
	std::cout << _type << ": Remaining hp: " << _hp << std::endl;
}
