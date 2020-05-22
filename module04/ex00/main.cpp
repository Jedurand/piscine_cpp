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
}
