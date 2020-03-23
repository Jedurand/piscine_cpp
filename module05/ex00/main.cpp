#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat* jean = new Bureaucrat("jean", 45);
	Bureaucrat* richard = new Bureaucrat(*jean);

	std::cout << jean->getName() << " " << jean->getGrade() << std::endl;
	std::cout << *jean;

	Bureaucrat* canape = new Bureaucrat("tricheur", 0);
	Bureaucrat* low = new Bureaucrat("low", 151);

	std::cout << canape->getName() << canape->getGrade() << std::endl; 	
	std::cout << low->getName() << low->getGrade() << std::endl; 	
	std::cout << *low;

	delete jean;
	delete richard;
	delete canape;
	delete low;
}
