#ifndef SROBOTOMYREQUESTFORM_HPP
#define SROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	public:
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm& sobotomyRequestForm);
	void operator = (const RobotomyRequestForm& sobotomyRequestForm);

	void execute(const Bureaucrat& executor) const;

	private:
	std::string _target;
	std::string _noise;
	RobotomyRequestForm();
};

#endif
