#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include <iostream>
#include <string>


int str_isdigit(std::string s);
std::string format_str(std::string s);

class Phonebook
{
	class Contact
	{
		public:
		Contact();
		void print();
		void edit();
		std::string& get_first_name();
		std::string& get_last_name();
		std::string& get_nickname();

		private:
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
