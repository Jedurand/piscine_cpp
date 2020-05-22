#include "AMateria.hpp"

AMateria::AMateria(const std::string& type)
{
	_type = type;
	_xp = 0;
}

AMateria::AMateria(const AMateria& aMateria)
{
	_xp = aMateria._xp;
}

void AMateria::operator = (const AMateria& aMateria)
{
	_xp = aMateria._xp;
}

const std::string& AMateria::getType() const
{
	return (_type);
}

unsigned int AMateria::getXp() const
{
	return (_xp);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}
