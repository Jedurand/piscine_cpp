#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	class GradeTooHighException;
	class GradeTooLowException;
	class AlreadySignedException;

	public:
	Form(std::string name = "Generic", int grade_toSign = 100, int grade_toExe = 50);
	virtual ~Form();
	Form(const Form& form);
	void operator = (const Form& form);

	//getters
	std::string getName() const;
	int getGradeToSign() const;
	int getGradeToExe() const;
	bool isSigned();
	void beSigned(const Bureaucrat& bureaucrat);

	private:
	const std::string 	_name;
	bool        		_signed;
	const int 			_grade_toSign;
	const int 			_grade_toExe;

	class GradeTooHighException: public std::exception
	{
		public:
		GradeTooHighException() throw();
		~GradeTooHighException() throw();
		virtual const char* what() const throw();

		private:
		static const std::string _error;
	};

	class GradeTooLowException: public std::exception
	{
		public:
		GradeTooLowException() throw();
		~GradeTooLowException() throw();
		virtual const char* what() const throw();

		private:
		static const std::string _error;
	};

	class AlreadySignedException: public std::exception
	{
		public:
		AlreadySignedException() throw();
		~AlreadySignedException() throw();
		virtual const char* what() const throw();

		private:
		static const std::string _error;
	};
};

std::ostream& operator << (std::ostream& out, Form& form);

#endif
