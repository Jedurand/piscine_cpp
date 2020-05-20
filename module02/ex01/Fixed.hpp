#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <sstream>

class Fixed
{
	private:
	int 				_n;
	bool				_sign;
	static const int	_fixed_point = 8;

	public:
	Fixed();
	void operator = (const Fixed& ori);
	Fixed(const Fixed& ori);
	Fixed(const int n);
	Fixed(const float f);

	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
	int getFixedPoint();

	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator << (std::ostream &out, Fixed& b);

#endif
