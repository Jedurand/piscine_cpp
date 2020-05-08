#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria
{
	public:
	Cure();
	~Cure();
	Cure(const Cure& cure);
	void operator = (const Cure& cure);
	void use(ICharacter& target);
	Cure* clone() const;	

	private:
};

#endif
