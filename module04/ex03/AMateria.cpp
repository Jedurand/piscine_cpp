#include "AMateria.hpp"

AMateria::AMateria(const std::string& type)
{
	_type = type;
	_xp = 0;
}

AMateria::AMateria(const AMateria& aMateria)
{	
}

void AMateria::operator = (const AMateria& aMateria)
{
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
	_xp += 10;
}

