#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include <iostream>
#include <string>


int str_isdigit(std::string s);
std::string format_str(std::string s);

class Contact
{	
	public:
	Contact();
	void print();
	void edit();

	public:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;
};	

class Phonebook
{
	public:
	// methods
	Phonebook();
	void add();
	void search();

	private:
	//attr
	int nb_contact;
	Contact list[8];
};

#endif
