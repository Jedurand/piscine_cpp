#include "Form.hpp"

Form::Form(std::string name, unsigned int grade_toSign, unsigned int grade_toExe)
{
	try
	{
		if (grade_toSign < 1 || grade_toExe < 1)
			throw(GradeTooHighException());
		if (grade_toSign > 150 || grade_toExe > 150)
			throw(GradeTooLowException());
		_grade_toSign = grade_toSign;
		_grade_toExe = grade_toExe;
		_name = name;
		_signed = 0;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
		return ;
	}
}

Form::~Form()
{
	std::cout << "Form deleted\n";
}

Form::Form(const Form& form)
{
	_name = form.getName();
	_grade_toSign = form.getGradeToSign();
	_grade_toExe = form.getGradeToExe();
	_signed = 0;
}

void Form::operator = (const Form& form)
{
	_name = form.getName();
	_grade_toSign = form.getGradeToSign();
	_grade_toExe = form.getGradeToExe();
	_signed = 0;
}

/////////////////////

const std::string Form::GradeTooHighException::_error = "Exception: Grade too high";

Form::GradeTooHighException::GradeTooHighException() throw()
{}

Form::GradeTooHighException::~GradeTooHighException() throw()
{}

const char* Form::GradeTooHighException::what() const throw()
{
	return (_error.c_str());
}	


const std::string Form::GradeTooLowException::_error = "Exception: Grade too low";

Form::GradeTooLowException::GradeTooLowException() throw()
{}

Form::GradeTooLowException::~GradeTooLowException() throw()
{}

const char* Form::GradeTooLowException::what() const throw()
{
	return (_error.c_str());
}	

const std::string Form::AlreadySignedException::_error = "Exception: Form already signed";

Form::AlreadySignedException::AlreadySignedException() throw()
{}

Form::AlreadySignedException::~AlreadySignedException() throw()
{}

const char* Form::AlreadySignedException::what() const throw()
{
	return (_error.c_str());
}	


/////////////////////

std::string Form::getName() const
{
	return (_name);
}

unsigned int Form::getGradeToSign() const
{
	return (_grade_toSign);
}

unsigned int Form::getGradeToExe() const
{
	return (_grade_toExe);
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	try
	{
		if (_signed == 1)
			throw(AlreadySignedException());
		if (bureaucrat.getGrade() > _grade_toSign)
			throw(GradeTooLowException());
		_signed = 1;
		std::cout << "Form: " << _name << " just got signed by " << bureaucrat.getName() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << bureaucrat.getName() << " can't sign form " << _name
		<< " because " << "\"" << e.what() << "\"\n";
	}
}

bool Form::isSigned()
{
	if (_signed == 1)
		return true;
	return false;
}

void Form::execute(const Bureaucrat& executor) const
{}

/////////////////////

std::ostream& operator << (std::ostream& out, Form& form)
{
	out << form.getName() << " form grade to sign: " << form.getGradeToSign() 
	<< " grade to exe: " << form.getGradeToExe() << std::endl;
	return (out);
}
