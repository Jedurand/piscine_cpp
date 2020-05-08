#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
	class GradeTooHighException;
	class GradeTooLowException;

	public:
	Bureaucrat(std::string name = "GrattePapier", unsigned int grade = 75);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& bureaucrat);
	void operator = (const Bureaucrat& bureaucrat);
	
	//getters
	std::string getName() const;
	unsigned int getGrade() const;

	void promote();
	void relegate();

	private:
	std::string _name;
	unsigned int _grade;

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
