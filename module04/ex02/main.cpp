#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	std::cout << "----Testing marine and his clone----\n";
	ISpaceMarine *richard = new TacticalMarine;

	richard->meleeAttack();
	ISpaceMarine *robert = richard->clone();
	robert->rangedAttack();

	std::cout << "----SquadTests----\n";

	std::cout << "\n pushing new members to squad\n\n";
	ISquad *squad = new Squad;
	std::cout << squad->getCount() << std::endl;
	squad->push(richard);
	squad->push(robert);
	std::cout << "squad count: " << squad->getCount() << std::endl;

	ISpaceMarine *robert2 = squad->getUnit(1);
	robert2->meleeAttack();
	squad->push(richard->clone());

	ISpaceMarine *arnold = new AssaultTerminator;
	squad->push(arnold);
	squad->push(richard->clone());
	squad->push(arnold->clone());
	squad->push(arnold->clone());

	std::cout << "\n---PURIFICATION---\nsquad Normal\n";
	for (int i = 0; i < squad->getCount(); i++)
	{
		ISpaceMarine *cur = squad->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << "\n\n-----------COnstructors test--------\n\n";

	std::cout << "\nsquadb (copy constructor)\n";
	ISquad* squadb = new Squad(*squad);

	std::cout << "\n\nTesting: squad attacks\n\n";

	for (int i = 0; i < squadb->getCount(); i++)
	{
		ISpaceMarine *cur = squadb->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << "\n\n----Testing Destructor on SquadB----\n\n";
	delete(squadb);

	std::cout << "\n\nSquadc: equal operator\n\nAdding two members\n";
	Squad squadc;

	squadc.push(new TacticalMarine);
	squadc.push(new AssaultTerminator);

	std::cout << "\n\n----Testing Squadc Attacks----\n\n";
	for (int i = 0; i < squadc.getCount(); i++)
	{
		ISpaceMarine *cur = squadc.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}


	std::cout << "\n\nSquadc = Squad\n\n";


	squadc = *squad;
	std::cout << "\n\n Deleting normal squad\n\n";
	delete(squad);

	std::cout << "\n\n----Testing Squadc Attacks----\n\n";

	for (int i = 0; i < squadc.getCount(); i++)
	{
		ISpaceMarine *cur = squadc.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}


	return (0);
}
