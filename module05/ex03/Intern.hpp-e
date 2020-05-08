#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	public:
	Intern();
	~Intern();
	Intern(const Intern& intern);
	void operator = (const Intern& intern);

	Form* makeForm(std::string name, std::string target);

	static Form* makeShubberryCreationForm(std::string target);
	static Form* makePresidentialPardonForm(std::string target);
	static Form* makeRobotomyRequestForm(std::string target);

	private:
	static std::string _names[3];
	Form	*(*_forms[3])(std::string target);
};

#endif
