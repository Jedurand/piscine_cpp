#include "Phonebook.h"

Phonebook::Phonebook()
{
	nb_contact = 0;
}

void Phonebook::add()
{
	std::string choice = "";
	int		choice_i;

	if (nb_contact < 8)
	{
		list[nb_contact].edit();
		//list[nb_contact].print();
		nb_contact++;
	}
	else
	{
		std::cout << "Max contact value: 8\nWhich contact do you want to earse?\n" << std::endl;
		std::getline(std::cin, choice);
		if (str_isdigit(choice))
		{
			choice_i = std::stoi(choice);
			if (choice_i > nb_contact || choice_i < 0)
				std::cout << "index invalid\nABORTING\n";
			else
				list[choice_i].edit();
		}
		else
			std::cout << "index invalid\nABORTING\n";
	}
}

Contact::Contact()
{
	first_name = "";
	last_name = "";
	nickname = "";
	login = "";
	postal_address = "";
	email = "";
	phone_number = "";
	birthday_date = "";
	favorite_meal = "";
	underwear_color = "";
	darkest_secret = "";
}	

void Contact::edit()
{
	std::cout << "ADDING NEW CONTACT" << std::endl;
	std::getline(std::cin, first_name);
	std::getline(std::cin, last_name);
	std::getline(std::cin, nickname);
	std::getline(std::cin, login);
	std::getline(std::cin, postal_address);
	std::getline(std::cin, email);
	std::getline(std::cin, phone_number);
	std::getline(std::cin, birthday_date);
	std::getline(std::cin, favorite_meal);
	std::getline(std::cin, underwear_color);
	std::getline(std::cin, darkest_secret);
	std::cout << "NEW CONTACT SUCCESSFULLY ADDED\n";
}

void Contact::print()
{
	std::cout << first_name << std::endl;
	std::cout << last_name << std::endl;
	std::cout << nickname << std::endl;
	std::cout << login << std::endl;
	std::cout << postal_address << std::endl;
	std::cout << email << std::endl;
	std::cout << phone_number << std::endl;
	std::cout << birthday_date << std::endl;
	std::cout << favorite_meal << std::endl;
	std::cout << underwear_color << std::endl;
	std::cout << darkest_secret << std::endl;
}

std::string format_str(std::string s)
{
	std::string s_b = "";

	if (s.size() < 10)
	{
		while (s_b.size() < 10 - s.size())
			s_b.push_back(' ');
		s_b = s_b + s;
		s_b.push_back('|');
		return (s_b);
	}
	else if (s.size() == 10)
		return (s.substr(0, 10) + "|");
	return (s.substr(0, 9) + ".|");
}	

int str_isdigit(std::string s)
{
	for (int i = 0; i < s.size(); i++)
		if (!std::isdigit(s[i]))
			return (0);
	return (1);
}

void Phonebook::search()
{
	int i(0);
	std::string choice;
	int choice_i;

	while (i < nb_contact)
	{
		//std::cout << i;
		//std::cout << "         |";
		std::cout << format_str(std::to_string(i));
		std::cout << format_str(list[i].first_name);
		std::cout << format_str(list[i].last_name);
		std::cout << format_str(list[i].login) << std::endl;
		i++;
	}
	if (i == 0)
	{
		std::cout << "Contact List is empty" << std::endl;
		return ;
	}
	std::cout << "Choose index\n";
	std::getline(std::cin, choice);
	if (str_isdigit(choice))
	{
		choice_i = std::stoi(choice);
		if (choice_i > nb_contact - 1 || choice_i < 0)
			std::cout << "contact doesn't exists" << std::endl;
		else
			list[choice_i].print();
	}
	else
		std::cout << "Index invalid, must be a number in range[0, nb_contact]\nABORTING\n";	
}
	
