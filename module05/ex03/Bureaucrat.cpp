#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, unsigned int grade)
{
	try
	{
		if (grade < 1)
			throw(GradeTooHighException());
		if (grade > 150)
			throw(GradeTooLowException());
		_grade = grade;
		_name = name;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
		return ;
	}
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat fired\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat)
{
	_name = bureaucrat.getName();
	_grade = bureaucrat.getGrade();
}

void Bureaucrat::operator = (const Bureaucrat& bureaucrat)
{

	_name = bureaucrat.getName();
	_grade = bureaucrat.getGrade();
}

/////////////////////

const std::string Bureaucrat::GradeTooHighException::_error = "Exception: Grade too high";

Bureaucrat::GradeTooHighException::GradeTooHighException() throw()
{}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return (_error.c_str());
}	


const std::string Bureaucrat::GradeTooLowException::_error = "Exception: Grade too low";

Bureaucrat::GradeTooLowException::GradeTooLowException() throw()
{}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return (_error.c_str());
}	


/////////////////////

std::string Bureaucrat::getName() const
{
	return (_name);
}

unsigned int Bureaucrat::getGrade() const
{
	return (_grade);
}

/////////////////////

void Bureaucrat::promote()
{
	if (_grade - 1 > 0)
		_grade -= 1;
}

void Bureaucrat::relegate()
{
	if (_grade + 1 <= 150)
		_grade += 1;
}

void Bureaucrat::signForm(Form& form)
{
	form.beSigned(*this);
}

void Bureaucrat::executeForm(const Form& form)
{
	form.execute(*this);
}

///////////////////////

std::ostream& operator << (std::ostream& out, Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << " bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (out);
}
