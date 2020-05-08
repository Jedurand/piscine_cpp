#include "Span.hpp"

int main()
{
	Span sp(5);
	
	sp.addNumber(1);
	sp.addNumber(12);
	sp.addNumber(0);
	sp.addNumber(-150);
	sp.addNumber(30);
	
	sp.addNumber(777);
	
	Span sp2(sp);
	sp2.addNumber(67);
	
	Span sp3 = sp2;
	sp2.addNumber(77);

	sp3 = sp2;

	////////////

	std::cout << "longtest: " << sp.longestSpan() << std::endl;
	std::cout << "shortest: " << sp.shortestSpan() << std::endl;	
}
