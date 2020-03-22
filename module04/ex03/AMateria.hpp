#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"


class ICharacter;
class AMateria
{
	public:
	AMateria(const std::string& type);
	virtual ~AMateria() {};
	AMateria(const AMateria& aMateria);
	void operator = (const AMateria& aMateria);

	const std::string& getType() const;
	unsigned int getXp() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target); 

	private:
	unsigned int _xp;
	std::string _type;
};

#endif
