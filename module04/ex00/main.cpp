#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
	Sorcerer rob;
	Sorcerer henri(rob);
	Sorcerer john = rob;
	Victim v;
	Peon joe("peonman");

	Peon lol(joe);
	Peon lol2 = lol;

	std::cout << rob;
	std::cout << v << joe;
	rob.polymorph(v);
	rob.polymorph(joe);
}
