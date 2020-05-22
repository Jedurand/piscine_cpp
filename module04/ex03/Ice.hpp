#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria
{
	public:
	Ice();
	~Ice();
	Ice(const Ice& ice);
	void use(ICharacter& target);
	Ice* clone() const;

	private:
};

#endif
