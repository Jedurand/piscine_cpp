#include "Token.hpp"

Token::Token(int value, int type)
{
	_value = value;		
	_type = type;
	if (_value == 40)
		_type = 3;
	if (_value == 41)
		_type = 4;
	else if (_value == 42 || _value == 47)
		_type = 2;
}

int Token::getValue() const
{
	return (_value);
}

int Token::getType() const
{
	return (_type);
}

