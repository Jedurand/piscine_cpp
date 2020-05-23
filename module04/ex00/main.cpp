#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "RandomDude.hpp"

int main()
{
	/*Sorcerer rob;
	Sorcerer henri(rob);
	Sorcerer john = rob;
	Victim v;
	Peon joe("peonman");

	Peon lol(joe);
	Peon lol2 = lol;

	std::cout << rob;
	std::cout << v << joe;
	rob.polymorph(v);
	rob.polymorph(joe);*/
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	RandomDude random("'My name isn't Not important'");
	std::cout << random;
	robert.polymorph(random);

	std::cout << "\n\nTest constructors\n\n";
	Sorcerer richard(robert);
	Sorcerer harry("harry", "The pot of butter");
	std::cout << richard << std::endl;
	richard.polymorph(jim);
	std::cout << harry << std::endl;
	harry = robert;
	std::cout << harry << std::endl;

	Victim joe2(jim);
	Victim joe3("lol");
	joe3 = joe2;

	Peon p2(joe);
	Peon p3("lol");
	p3 = p2;

}
