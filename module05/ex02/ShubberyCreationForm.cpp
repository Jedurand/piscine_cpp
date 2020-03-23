#include "ShubberyCreationForm.hpp"

ShubberyCreationForm::ShubberyCreationForm(std::string target): Form("SHubberyCreationForm", 145, 137)
{
	_target = target;
	_tree = "     *     \n*    *    *\n *   *   * \n  *  *  *  \n   * * *   *\n    ***    \n     *     \n     *     \n     *     \n     *     \n  *****   \n ******** \n";
}

ShubberyCreationForm::~ShubberyCreationForm()
{
}

ShubberyCreationForm::ShubberyCreationForm(const ShubberyCreationForm& shubberyCreationForm): Form(shubberyCreationForm)
{
}

void ShubberyCreationForm::operator = (const ShubberyCreationForm& shubberyCreationForm)
{
}

void ShubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (!Form::check(executor))
		return ;
	std::ofstream file(_target + "_shubbery");
	file << _tree;
	file.close();
}
	
