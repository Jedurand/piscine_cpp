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

	Span sp3(10);
	sp3.addNumber(1);
	sp3.addNumber(4);
	sp3.addNumber(-123);

	////////////

	std::cout << "longtest: " << sp.longestSpan() << std::endl;
	std::cout << "shortest: " << sp.shortestSpan() << std::endl;

	std::cout << "longtest: " << sp2.longestSpan() << std::endl;
	std::cout << "shortest: " << sp2.shortestSpan() << std::endl;

	std::cout << "longtest: " << sp3.longestSpan() << std::endl;
	std::cout << "shortest: " << sp3.shortestSpan() << std::endl;

	sp3 = sp2;
	std::cout << "longtest: " << sp3.longestSpan() << std::endl;
	std::cout << "shortest: " << sp3.shortestSpan() << std::endl;

	Span empty(0);
	std::cout << "longest: " << empty.longestSpan() << std::endl;

	Span lol(2);
	lol.addNumber(0);
	lol.addNumber(0);
	std::cout << "longtest: " << lol.longestSpan() << std::endl;
	std::cout << "shortest: " << lol.shortestSpan() << std::endl;

	Span main = Span(5);
	main.addNumber(5);
	main.addNumber(3);
	main.addNumber(17);
	main.addNumber(9);
	main.addNumber(11);
	std::cout << main.shortestSpan() << std::endl;
	std::cout << main.longestSpan() << std::endl;
}
