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
	class SignedException;

	public:
	Form(std::string name = "Generic", unsigned int grade_toSign = 100, unsigned int grade_toExe = 50);
	virtual ~Form();
	Form(const Form& form);
	void operator = (const Form& form);
	
	//getters
	std::string getName() const;
	unsigned int getGradeToSign() const;
	unsigned int getGradeToExe() const;
	bool isSigned() const;
	void beSigned(Bureaucrat& bureaucrat);
	
	virtual void execute(const Bureaucrat& executor) const = 0;
	bool check(const Bureaucrat& executor) const;

	private:
	std::string _name;
	bool         _signed;
	unsigned int _grade_toSign;
	unsigned int _grade_toExe;

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
	
	class SignedException: public std::exception
	{
		public:
		SignedException(std::string error) throw();
		~SignedException() throw();
		virtual const char* what() const throw();

		private:
		std::string _error;
	};
};

std::ostream& operator << (std::ostream& out, Form& form);

#endif
