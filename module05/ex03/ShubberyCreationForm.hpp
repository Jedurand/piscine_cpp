#ifndef SHUBBERYCREATIONFORM_HPP
#define SHUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "Form.hpp"

class ShubberyCreationForm: public Form
{
	public:
	ShubberyCreationForm(std::string target);
	~ShubberyCreationForm();
	ShubberyCreationForm(const ShubberyCreationForm& shubberyCreationForm);
	void operator = (const ShubberyCreationForm& shubberyCreationForm);

	void execute(const Bureaucrat& executor) const;	

	private:
	std::string _target;
	std::string _tree;
};

#endif
