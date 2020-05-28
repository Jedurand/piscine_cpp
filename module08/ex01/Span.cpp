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
	_v.clear();
	_N = span._N;
	_v = span._v;
}

void Span::addNumber(int n)
{
	try
	{
		if (_v.size() >= _N)
			throw (std::exception());
		_v.push_back(n);
		std::sort(_v.begin(), _v.end());
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
		if (_v.size() == 0 || _v.size() == 1)
			throw (std::exception());
		return (abs(_v.front() - _v.back()));
	}
	catch (std::exception& e)
	{
		std::cout << "Span is empty, or just contains just one element\n";
		return (0);
	}
}

int Span::shortestSpan()
{
	try
	{
		int shortest = abs(_v.front() - _v.back());
		if (_v.size() == 0 || _v.size() == 1)
			throw (std::exception());
		for (std::vector<int>::iterator it = _v.begin(); it != _v.end(); it++)
		{
			for (std::vector<int>::iterator jt = it+1; jt!= _v.end(); jt++)
			{
				if (abs(*it - *jt) < shortest)
					shortest = abs(*it - *jt);
			}
		}
		return (shortest);

	}
	catch (std::exception& e)
	{
		std::cout << "Span is empty, or just contains just one element\n";
		return (0);
	}
}
