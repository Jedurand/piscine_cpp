#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class Character: public ICharacter
{
	public:
	Character(std::string name = "Random");
	~Character();
	Character(const ICharacter& character);
	void operator = (const ICharacter& character);

	std::string getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	void deleteMaterias();
	void init_materias();

	private:
	std::string _name;
	AMateria* 	_m[4];
};

#endif
