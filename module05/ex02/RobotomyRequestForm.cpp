#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Robotomy request form", 72, 45)
{
	_target = target;
	_noise = "* RATATYATATATATATATA *";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& robotomyRequestForm): Form(robotomyRequestForm)
{
}

void RobotomyRequestForm::operator = (const RobotomyRequestForm& robotomyRequestForm)
{
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (!Form::check(executor))
		return ;
	std::cout << _noise << std::endl;
	std::cout << _target << " has been succesfully robotomised\n";
}
	
