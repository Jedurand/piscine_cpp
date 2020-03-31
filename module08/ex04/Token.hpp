#include <iostream>
#include <string>

#define NUM 0
#define OP_LOW 1
#define OP_HIGH 2
#define PAROPEN 3
#define PARCLOSE 4

class Token
{
	public:
	Token(int value, int type);
	
	int getValue() const;
	int getType() const;

	private:
	int _value;
	int _type;
};
	
