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

/*	std::cout << jean->getName() << " " << jean->getGrade() << std::endl;
	std::cout << *jean;

	Bureaucrat* canape = new Bureaucrat("tricheur", 0);
	Bureaucrat* low = new Bureaucrat("low", 151);

	std::cout << canape->getName() << canape->getGrade() << std::endl;
	std::cout << low->getName() << low->getGrade() << std::endl;
	std::cout << *low;
*/
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

	std::cout << "--------Intern check-----\n";
	Intern stagiaire;
	Bureaucrat* admin = new Bureaucrat("super user", 1);
	Bureaucrat* lol = new Bureaucrat("almost", 46);

	Form* hub = stagiaire.makeForm("shuberry creation", "tree");
	hub->execute(*jean);
	jean->signForm(*hub);
	hub->execute(*jean);
	hub->execute(*richard);

	Form* pp = stagiaire.makeForm("presidential pardon", "Gratos");
	pp->execute(*jean);
	pp->execute(*admin);
	pp->beSigned(*admin);
	pp->execute(*admin);

	admin->executeForm(*pp);
	jean->executeForm(*pp);

	Form *rf = stagiaire.makeForm("robotomy request", "Bender");
	admin->executeForm(*rf);
	admin->signForm(*rf);
	admin->executeForm(*rf);
	jean->executeForm(*rf);
	b1->signForm(*rf);
	b1->executeForm(*rf);

	lol->executeForm(*rf);
	lol->promote();
	lol->executeForm(*rf);

	Form *rf_nul = stagiaire.makeForm("robotomyrequest", "Bender");
	(void)rf_nul;

	delete jean;
	delete richard;
	delete admin;
	delete lol;
	delete pp;
	delete hub;
	delete rf;

}
