#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat* jean = new Bureaucrat("jean", 45);
	Bureaucrat* richard = new Bureaucrat(*jean);
	Bureaucrat* b1 = new Bureaucrat("b1", 101);

	std::cout << jean->getName() << " " << jean->getGrade() << std::endl;
	std::cout << *jean;

	Bureaucrat* canape = new Bureaucrat("tricheur", 0);
	Bureaucrat* low = new Bureaucrat("low", 151);

	std::cout << canape->getName() << canape->getGrade() << std::endl; 	
	std::cout << low->getName() << low->getGrade() << std::endl; 	
	std::cout << *low;

	std::cout << "--------Forms---------\n";

	Form* z4b = new Form("z4b");
	Form* f2 = new Form("f2", 50, 25);
	Form* nul = new Form("nul", 155, -1);
	
	jean->signForm(*z4b);
	jean->signForm(*z4b);
	b1->signForm(*f2);

	std::cout << *z4b;
 	std::cout << z4b->isSigned() << std::endl;

	delete jean;
	delete richard;
	delete canape;
	delete low;
	
	delete z4b,
	delete f2;
	delete nul;
}
