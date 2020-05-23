#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat* jean = new Bureaucrat("jean", 45);
	Bureaucrat* richard = new Bureaucrat(*jean);

	std::cout << jean->getName() << " " << jean->getGrade() << std::endl;
	std::cout << *jean << std::endl;

	Bureaucrat canape("Promotion canape", 1);
	Bureaucrat low("Stagiaire", 150);
	std::cout << canape << std::endl;
	std::cout << low << std::endl;

	std::cout << "\nPromotion time\n";
	jean->promote();
	std::cout << *jean << std::endl;
	jean->relegate();
	std::cout << *jean << std::endl;

	canape.promote();
	std::cout << canape << std::endl;
	low.relegate();
	std::cout << low << std::endl;

/*	low = canape;
	std::cout << "low = canape: " << low << std::endl;
*/
/*	Bureaucrat high("Tricheur", 0);
	(void)high;
	Bureaucrat low1("Rebut", 151);
	(void)low1;*/


	std::cout << "--------Forms---------\n";

	Form* z4b = new Form("z4b", 50, 50);
	Form* f2 = new Form("f2", 50, 25);


	jean->signForm(*z4b);
	jean->signForm(*z4b);
	low.signForm(*f2);

	std::cout << *z4b << std::endl;
 	std::cout << z4b->isSigned() << std::endl;

	//Form* nul = new Form("nul", 155, -1);
	//(void)nul;
//	Form* nul2 = new Form("nul", 155, 2);
//	 (void)nul2;
	delete jean;
	delete richard;


	delete z4b,
	delete f2;
	/*delete nul;
	delete nul2;*/
}
