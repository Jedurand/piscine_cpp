#include <iostream>
#include <string>
#include "Classes.hpp"

void iddentify_from_pointer(Base *p)
{
	A* pa = dynamic_cast<A*>(p);
	if (pa != 0)
		std::cout << "A\n";
	B* pb = dynamic_cast<B*>(p);
	if (pb)
		std::cout << "B\n";
	C* pc = dynamic_cast<C*>(p);
	if (pc)
		std::cout << "C\n";
}

void iddentify_from_reference(Base& p)
{
	try
	{
		A& ra = dynamic_cast<A&>(p);
		std::cout << "A\n";
	}
	catch (std::exception& e)
	{}
	try
	{
		B& rb = dynamic_cast<B&>(p);
		std::cout << "B\n";
	}
	catch (std::exception& e)
	{}
	try
	{
		C& rc = dynamic_cast<C&>(p);
		std::cout << "C\n";
	}
	catch (std::exception& e)
	{}
}	

int main()
{
	C* pc = new C;
	B* pb =  new B;
	A* pa = new A;

	A a;
	A& ra = a;
	B b;
	B& rb = b;
	C c;
	C& rc = c;

	iddentify_from_pointer(pb);
	iddentify_from_pointer(pc);
	iddentify_from_pointer(pa);
	iddentify_from_reference(rb);
	iddentify_from_reference(rc);
	iddentify_from_reference(ra);

}
