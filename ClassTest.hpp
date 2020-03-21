#ifndef CLASSTEST_HPP
#define CLASSTEST_HPP

#include <iostream>
#include <string>

class Lolbite
{
	public:
	Lolbite();
	~Lolbite();
	Lolbite(const Lolbite& classTest);
	void operator = (const Lolbite& classTest);

	private:
	int _a;
	int _b;
	int _c;
};

#endif
