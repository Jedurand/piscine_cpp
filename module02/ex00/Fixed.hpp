#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <bitset>

class Fixed
{
	private:
	int 			_n;
	static const int	nbits = 8;

	public:
	Fixed();
	void operator = (const Fixed& ori);
	Fixed(const Fixed& ori);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
