#include <iostream>
#include <string>
#include "Phonebook.h"

int main()
{
	std::string choice;
	Phonebook phonebook;

	while (1)
	{
		std::cout << ">> Waiting for a command: ADD, SEARCH, or EXIT:\n";
		std::getline(std::cin, choice);
		if (choice == "ADD")
			phonebook.add();
		else if (choice == "SEARCH")
			phonebook.search();
		else if (choice == "EXIT")
			return (0);
		else
			std::cout << "Incorrect choice\nSupported features: ADD, SEARCH, EXIT" << std::endl;
	}
}	
