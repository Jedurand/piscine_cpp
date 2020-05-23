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

	low = canape;
	std::cout << "low = canape: " << low << std::endl; 

	Bureaucrat high("Tricheur", 0);
	(void)high;
	Bureaucrat low1("Rebut", 151);
	(void)low1;

	delete jean;
	delete richard;
	//delete canape;
//	delete low;
}
