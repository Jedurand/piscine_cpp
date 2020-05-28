#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Span
{
	public:
	Span(unsigned int N);
	~Span();
	Span(const Span& span);
	void operator = (const Span& span);

	void addNumber(int n);

	int shortestSpan();
	int longestSpan();

	private:
	unsigned int 		_N;
	std::vector<int> 	_v;
	Span();
};

#endif
