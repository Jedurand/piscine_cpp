#ifndef CLASSTEST_HPP
#define CLASSTEST_HPP
#include <iostream>
#include <string>

class ClassTest
{
	public:
	ClassTest();
	~ClassTest();
	ClassTest(const ClassTest& classTest);
	void operator = (const ClassTest& classTest);

	private:
	int _a;
	int _b;
	int _c;
	int _d;
};

#endif
