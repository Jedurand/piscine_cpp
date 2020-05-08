#include "Span.hpp"

Span::Span(unsigned int N)
{
	_N = N;
}

Span::~Span()
{
	_v.clear();
}

Span::Span(const Span& span)
{
	_N = span._N;
	_v = span._v;
}

void Span::operator = (const Span& span)
{
	_N = span._N;
	_v = span._v;
}

void Span::addNumber(int n)
{
	try
	{
		if (_v.size() >= _N)
			throw (std::exception());
		if (_v.size() == 0)
		{
			_smallest = n;
			_biggest = n;
		}
		else
		{
			if (n < _smallest)
				_smallest = n;
			if (n > _biggest)
				_biggest = n;
		}
		_v.push_back(n);
	}
	catch (std::exception& e)
	{
		std::cout << "Exception: Max size already reached\n";
	}
}

int Span::longestSpan()
{
	try
	{
		if (_v.size() == 0)
			throw (std::exception());
		return (abs(_biggest - _smallest));
	}
	catch (std::exception& e)
	{
		std::cout << "Span is empty\n";
		return (0);
	}
}

int Span::shortestSpan()
{
	try
	{
		int shortest = _biggest - _smallest;
		if (_v.size() == 0)
			throw (std::exception());
		for (int i = 0; i < _v.size(); i++)
		{
			for (int j = 0; j < _v.size(); j++)
			{
				if (j != i && abs(_v[i] - _v[j]) < shortest)
					shortest = abs(_v[i] - _v[j]);
			}
		}
		return (shortest);
	}
	catch (std::exception& e)
	{
		std::cout << "Span is empty\n";
		return (0);
	}
}
	
