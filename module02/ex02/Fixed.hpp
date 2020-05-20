#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <sstream>

class Fixed
{
	private:
	int 			_n;
	bool			_sign;
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

	Fixed operator ++ (void);
	Fixed operator -- (void);
	Fixed operator ++ (int);
	Fixed operator -- (int);

	bool operator == (const Fixed& b);
	bool operator != (const Fixed& b);
	bool operator < (const Fixed& b);
	bool operator <= (const Fixed& b);
	bool operator > (const Fixed& b);
	bool operator >= (const Fixed& b);

	Fixed operator + (const Fixed& b);
	Fixed operator - (const Fixed& b);
	Fixed operator * (const Fixed& b);
	Fixed operator / (const Fixed& b);

	static Fixed& max(Fixed& a, Fixed& b);
	static Fixed& min(Fixed& a, Fixed& b);

};

//std::ostream& operator << (std::ostream &out, Fixed& b);
std::ostream& operator << (std::ostream &out, Fixed b);

Fixed& max(Fixed& a, Fixed& b);
Fixed& min(Fixed& a, Fixed& b);



#endif
