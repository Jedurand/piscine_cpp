#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	_n = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed& ori)
{
	std::cout << "Copy constructor called\n";
	_n = ori.getRawBits();
}

void Fixed::operator = (const Fixed& ori)
{
	std::cout << "Assignation member function called\n";
	this->_n = ori.getRawBits();
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (_n);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	_n = raw;
}
