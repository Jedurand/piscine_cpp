#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main()
{
	std::cout << "------Weapons------\n";
	PlasmaRifle pr;
	PowerFist pf;


	PlasmaRifle pr2 = pr;

	std::cout << pr2.getAPCost() << std::endl;

	std::cout << pr.getAPCost() << " " << pr.getName() << std::endl;
	std::cout << pf.getDamage() << " " << pf.getName() << std::endl;
	pr.attack();
	pf.attack();

	std::cout << "\n-----Enemies-----\n";
	SuperMutant *sp = new SuperMutant;
	std::cout << sp->getType() << " " << sp->getHp() << std::endl;
	sp->takeDamage(1000);

	RadScorpion *rs = new RadScorpion;
	std::cout << rs->getType() << " " << rs->getHp() << std::endl;
	rs->takeDamage(10);


	delete sp;
	delete rs;

	std::cout << "\n\n-----\n\n";
	sp = new SuperMutant;
	rs = new RadScorpion;

	std::cout << "\n----Player-----\n";
	Character moi("moi");
	std::cout << moi.getName() << std::endl;
	moi.equip(&pf);
	moi.printInfo();
	moi.equip(&pr);
	moi.printInfo();

	std::cout << "-------Attack Time------\n";
	moi.attack(sp);
	moi.attack(rs);
	moi.attack(sp);
	moi.attack(sp);
	moi.attack(sp);
	moi.recoverAp();
	moi.recoverAp();
	moi.recoverAp();
	moi.recoverAp();
	moi.recoverAp();
	moi.equip(&pf);
	moi.attack(rs);
	moi.attack(rs);
	//moi.attack(rs);
	//moi.attack(rs);
	std::cout << moi;
	std::cout << "\n-----Destruction time-----\n";
}
