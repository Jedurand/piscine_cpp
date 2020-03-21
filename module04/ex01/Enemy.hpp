#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy
{
	public:
	Enemy(int hp = 10, std::string type = "Generic Zombie");
	virtual ~Enemy();
	Enemy(const Enemy& enemy);
	void operator = (const Enemy& enemy);

	std::string getType() const;
	int getHp() const;

	virtual void takeDamage(int damage);

	private:
	std::string _type;
	int _hp;
};

#endif
