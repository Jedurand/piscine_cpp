#include "Bureaucrat.hpp"
#include "ShubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat* jean = new Bureaucrat("jean", 45);
	Bureaucrat* richard = new Bureaucrat("richard", 140);
	Bureaucrat* b1 = new Bureaucrat("b1", 101);

	std::cout << jean->getName() << " " << jean->getGrade() << std::endl;
	std::cout << *jean;

	Bureaucrat* canape = new Bureaucrat("tricheur", 0);
	Bureaucrat* low = new Bureaucrat("low", 151);

	std::cout << canape->getName() << canape->getGrade() << std::endl;
	std::cout << low->getName() << low->getGrade() << std::endl;
	std::cout << *low;

/*	std::cout << "--------Forms---------\n";

	Form* z4b = new Form("z4b");
	Form* f2 = new Form("f2", 50, 25);
	Form* nul = new Form("nul", 155, -1);

	jean->signForm(*z4b);
	jean->signForm(*z4b);
	b1->signForm(*f2);

	std::cout << *z4b;
 	std::cout << z4b->isSigned() << std::endl;
*/

	std::cout << "--------Other forms------\n";
	Bureaucrat* admin = new Bureaucrat("super user", 1);
	Bureaucrat* lol = new Bureaucrat("almost", 46);

	ShubberyCreationForm* hub = new ShubberyCreationForm("tree");
	hub->execute(*jean);
	jean->signForm(*hub);
	hub->execute(*jean);
	hub->execute(*richard);

	PresidentialPardonForm pp("Gratos");
	pp.execute(*jean);
	pp.execute(*admin);
	pp.beSigned(*admin);
	pp.execute(*admin);

	admin->executeForm(pp);
	jean->executeForm(pp);

	RobotomyRequestForm rf("Bender");
	admin->executeForm(rf);
	admin->signForm(rf);
	admin->executeForm(rf);
	jean->executeForm(rf);
	b1->signForm(rf);
	b1->executeForm(rf);

	lol->executeForm(rf);
	lol->promote();
	lol->executeForm(rf);

	std::cout << "\n\n---------TEsting the Intern---------\n\n";
	Intern intern;

	Form* shuberry = intern.makeForm("shuberry creation", "tree_test");
	Form* robotomy = intern.makeForm("robotomy request", "bender");
	Form*  pardon = intern.makeForm("presidential pardon", "gratos");

	Intern intern2(intern);
	Intern intern3 = intern;

	Form* pardon2 = intern3.makeForm("presidential pardon", "henrichard le cirminel");
	Form* pardon3 = intern2.makeForm("presidential pardon", "lolloooo");

	admin->executeForm(*shuberry);
	admin->signForm(*shuberry);
	admin->executeForm(*shuberry);
	jean->executeForm(*robotomy);
	b1->signForm(*robotomy);
	b1->executeForm(*robotomy);

	lol->executeForm(*pardon);
	lol->promote();

	admin->signForm(*pardon);
	admin->signForm(*pardon2);
	admin->signForm(*pardon3);
	admin->executeForm(*pardon);
	admin->executeForm(*pardon2);
	admin->executeForm(*pardon3);



	std::cout << "\n\n--------Plan social--------\n\n";
	delete jean;
	delete richard;
	delete canape;
	delete low;

	delete hub;

	delete shuberry;
	delete robotomy;
	delete pardon;
	delete pardon2;
	delete pardon3;
}
