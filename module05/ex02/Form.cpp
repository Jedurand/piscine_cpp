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


Form::SignedException::SignedException(std::string error) throw()
{
	_error = error;
}

Form::SignedException::~SignedException() throw()
{}

const char* Form::SignedException::what() const throw()
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

void Form::beSigned(Bureaucrat& bureaucrat)
{
	try
	{
		if (_signed == 1)
			throw(SignedException("Exception: Form already signed"));
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

bool Form::isSigned() const
{
	if (_signed == 1)
		return true;
	return false;
}

bool Form::check(const Bureaucrat& executor) const
{
	try
	{
		if (executor.getGrade() > _grade_toExe)
			throw(GradeTooLowException());
		
		if (!isSigned())
			throw(SignedException("Exception: Form unsigned"));
		std::cout << executor.getName() << " executed form: " << _name << std::endl;
		return true;
	}
	catch (std::exception& e)
	{
		std::cout << "Error on execution of " << _name << ": "
		<< "\"" << e.what() << "\"\n";
		return false;
	}
}

/////////////////////

std::ostream& operator << (std::ostream& out, Form& form)
{
	out << form.getName() << " form grade to sign: " << form.getGradeToSign() 
	<< " grade to exe: " << form.getGradeToExe() << std::endl;
	return (out);
}
