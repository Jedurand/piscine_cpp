#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "Chainsword.hpp"
#include "Fish.hpp"

int main()
{
	std::cout << "------Weapons------\n";
	PlasmaRifle pr;
	PlasmaRifle pr3;
	PowerFist pf;


	PlasmaRifle pr2 = pr;
	pr3 = pr2;


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
	std::cout << moi << std::endl;
	moi.equip(&pf);
	std::cout << moi << std::endl;
	moi.equip(&pr);
	std::cout << moi << std::endl;

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

	std::cout << "\n\n----------Constructors----------\n";

	SuperMutant a;
	RadScorpion b;
	SuperMutant c(a);
	a = c;
	RadScorpion d(b);
	d = b;

	Character e(moi);
	Character f("Toi");
	moi = f;
	std::cout << e << " | moi | " << moi << std::endl;
	f = e;
	std::cout << f;

	Fish fish;
	Chainsword chainsword;
	f.equip(&chainsword);
	f.attack(&fish);
	f.attack(&fish);
	f.attack(&fish);
	f.attack(&fish);

	std::cout << "\n-----Destruction time-----\n";
}
