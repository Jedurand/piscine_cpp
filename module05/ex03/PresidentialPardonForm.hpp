#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm& presidentialPardonForm);
	void operator = (const PresidentialPardonForm& presidentialPardonForm);

	void execute(const Bureaucrat& executor) const;	

	private:
	std::string _target;
};

#endif
