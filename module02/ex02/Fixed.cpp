#include "Fixed.hpp"

Fixed::Fixed()
{
	_n = 0;
	_sign = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed& ori)
{
	_n = ori.getRawBits();
	_sign = ori._sign;
}

void Fixed::operator = (const Fixed& ori)
{
	this->_n = ori.getRawBits();
	this->_sign = ori._sign;
}

int Fixed::getRawBits(void) const
{
	return (_n);
}

void Fixed::setRawBits(int const raw)
{
	_n = raw;
}

// Other constructors
Fixed::Fixed(const int n)
{
	setRawBits(n << _fixed_point);
	_sign = 0;
}

Fixed::Fixed(const float f)
{
	unsigned char raw[sizeof(int)];
	int integ = (int)f;
	std::stringstream ost;
	float dec;

	int raw2 = 0;
	raw[0] = 0;

	ost << f;
	std::string fs = ost.str();
	if (fs.find('.') < fs.size())
	{
		fs = "0" + fs.substr(fs.find('.'));
		dec = std::stof(fs);
	}
	else
		dec = 0.0;

	for (int i = 7; i >= 0; i--)
	{
		dec *= 2;
		if (dec >= 1)
		{
			raw[0] += pow(2, i);
			dec = dec - 1;
		}
	}
	memcpy(&raw[1], &integ, 3);
	memcpy(&raw2, raw, sizeof(int));
	setRawBits(raw2);
	if (f > -1 && f < 0)
	{
		std::cout << "merde\n";
		_sign = 1;
	}
	else
		_sign = 0;
}

int Fixed::getFixedPoint()
{
	return (_fixed_point);
}

int Fixed::toInt(void) const
{
	return (_n >> _fixed_point);
}

float Fixed::toFloat(void) const
{
	unsigned char raw[sizeof(int)];
	int raw_i = getRawBits();

	std::stringstream ost;

	memcpy(raw, &raw_i, sizeof(int));

	std::string s = "";
	s.append(std::to_string(raw_i >> _fixed_point));

	float dec = 0;
	int j = 7;
	for (int i = 1; i <= _fixed_point; i++)
	{
		if (raw[0] >= pow(2, j))
		{
			dec += pow(2, -i);
			raw[0] -= pow(2, j);
		}
		j--;
	}

	ost << dec;
	std::string fs = ost.str();

	if (fs.find('.') < fs.size())
		fs = fs.substr(fs.find('.'));
	else
		fs = ".0";

	s = s + fs;
	if (_sign == 1)
	{
		return (-(std::stof(s)));
	}
	return (std::stof(s));
}
/*
std::ostream& operator << (std::ostream &out, Fixed& b)
{
	return (out << b.toFloat());
}
*/
std::ostream& operator << (std::ostream &out, Fixed b)
{
	return (out << b.toFloat());
}

/* Comp Overloads */

bool Fixed::operator == (const Fixed& b)
{
	if (getRawBits() == b.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator != (const Fixed& b)
{
	if (getRawBits() != b.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator < (const Fixed& b)
{
	if (toFloat() < b.toFloat())
		return (1);
	return (0);
}
bool Fixed::operator <= (const Fixed& b)
{
	if (toFloat() < b.toFloat() || getRawBits() == b.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator > (const Fixed& b)
{
	if (toFloat() > b.toFloat())
		return (1);
	return (0);
}

bool Fixed::operator >= (const Fixed& b)
{
	if (toFloat() > b.toFloat() || getRawBits() == b.getRawBits())
		return (1);
	return (0);
}

/* Operations overload */

Fixed Fixed::operator + (const Fixed& b)
{
	return (Fixed(toFloat() + b.toFloat()));
}

Fixed Fixed::operator - (const Fixed& b)
{
	return (Fixed(toFloat() - b.toFloat()));
}

Fixed Fixed::operator * (const Fixed& b)
{
	return (Fixed(toFloat() * b.toFloat()));
}

Fixed Fixed::operator / (const Fixed& b)
{
	return (Fixed(toFloat() / b.toFloat()));
}

Fixed& max(Fixed& a, Fixed& b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

Fixed& min(Fixed& a, Fixed& b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}


// increments

Fixed Fixed::operator ++ (void)
{
	++_n;
	return (*this);
}

Fixed Fixed::operator -- (void)
{
	--_n;
	return (*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed b = *this;
	_n++;
	return (b);
}

Fixed Fixed::operator -- (int)
{
	Fixed b = *this;
		_n--;
	return (b);
}
