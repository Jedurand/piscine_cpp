#include "Sorcerer.hpp"
#include "Victim.hpp"

int main()
{
	Sorcerer rob;
	Sorcerer henri(rob);
	Sorcerer john = rob;
	Victim v;

	std::cout << rob;
	std::cout << v;
}
