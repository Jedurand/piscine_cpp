#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

template<class T>
class MutantStack: public std::stack<T>
{
	public:

	typedef typename std::deque<T>::iterator iterator;

	MutantStack(): std::stack<T>()
	{
	};

	virtual ~MutantStack()
	{
	};

	MutantStack(const MutantStack &mutantStack) : std::stack<T>(mutantStack)
	{

	};

	iterator begin()
	{
		return this->c.begin();
	}

	iterator end()
	{
		return this->c.end();
	}
};

#endif
