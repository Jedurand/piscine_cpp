#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern& intern)
{
}

void Intern::operator = (const Intern& intern)
{
}

static int hachage(std::string name)
{
	int res;
	for (int i = 0; i < name + 

Form* Intern::makeForm(std::string name, std::string target)
{
	std::cout << name << " " << hachage(name) << std::endl;
	switch((int)name[0])
	{
		case 0:
			return (new RobotomyRequestForm(target)); break ;
		case  1:
			return (new PresidentialPardonForm(target)); break ;
		case 2:
			return (new ShubberyCreationForm(target)); break;
		default:
			return (nullptr);
			break;
	}
}
