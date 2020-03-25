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
	
	enum class Type: std::string {rf = "robotomy request", pp = "presidential pardon", hub = "Shubbery"};

};

#endif
