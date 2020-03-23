#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("Presidential pardon form", 25, 5)
{
	_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& presidentialPardonForm): Form(presidentialPardonForm)
{
}

void PresidentialPardonForm::operator = (const PresidentialPardonForm& presidentialPardonForm)
{
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (!Form::check(executor))
		return ;
	std::cout << _target << " has been pardonned by Zafod Beeblebrox\n";
}
	
