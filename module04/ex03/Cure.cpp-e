#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Cure created\n";	
}

Cure::~Cure()
{
	std::cout << "Cure destroyed\n";
}

Cure::Cure(const Cure& cure): AMateria(cure)
{
// inside AMateria(check type and return;
}

void Cure::operator = (const Cure& cure)
{
	
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}

Cure* Cure::clone() const
{
	Cure *cure = new Cure;
	return (cure);
}
	

