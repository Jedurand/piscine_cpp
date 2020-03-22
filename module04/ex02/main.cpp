#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	ISpaceMarine *richard = new TacticalMarine;

	richard->meleeAttack();
	ISpaceMarine *robert = richard->clone();
	robert->rangedAttack();

	std::cout << "----SquadTests----\n";

	ISquad *squad = new Squad;
	std::cout << squad->getCount() << std::endl;
	squad->push(richard);
	squad->push(robert);
	std::cout << squad->getCount() << std::endl;
	
	ISpaceMarine *robert2 = squad->getUnit(1);
	robert2->meleeAttack();
	squad->push(richard->clone());

	ISpaceMarine *arnold = new AssaultTerminator;
	squad->push(arnold);
	squad->push(richard->clone());
	squad->push(arnold->clone());
	squad->push(arnold->clone());
	std::cout << squad->push(arnold) << std::endl;

	std::cout << "\n---PURIFICATION---\n";
	for (int i = 0; i < squad->getCount(); i++)
	{
		ISpaceMarine *cur = squad->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	} 
	
		

	delete(squad);

	return (0);
} 
