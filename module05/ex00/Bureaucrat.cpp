#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, unsigned int grade): _name(name)
{
	try
	{
		if (grade < 1)
			throw(GradeTooHighException());
		if (grade > 150)
			throw(GradeTooLowException());
		_grade = grade;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << ": " << _name << ": " << "Grade must be: 1 >= Grade <= 150\nAbort program\n";
		exit(1);
		//_grade = 150;
		return ;
	}
}

Bureaucrat::~Bureaucrat()
{
	//std::cout << "Bureaucrat fired\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat)
{
	_grade = bureaucrat.getGrade();
}

void Bureaucrat::operator = (const Bureaucrat& bureaucrat)
{
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

const std::string Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

/////////////////////

void Bureaucrat::promote()
{
	if (_grade > 1)
		_grade -= 1;
}

void Bureaucrat::relegate()
{
	if (_grade < 150)
		_grade += 1;
}

std::ostream& operator << (std::ostream& out, Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << " bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}
