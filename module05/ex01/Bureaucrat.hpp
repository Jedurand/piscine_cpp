#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	class GradeTooHighException;
	class GradeTooLowException;

	public:
	Bureaucrat(std::string name, unsigned int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& bureaucrat);
	void operator = (const Bureaucrat& bureaucrat);

	//getters
	const std::string getName() const;
	int getGrade() const;

	void promote();
	void relegate();

	void signForm(Form& form);

	private:
	const std::string 	_name;
	int 				_grade;
	Bureaucrat();

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

};

std::ostream& operator << (std::ostream& out, Bureaucrat& bureaucrat);

#endif
