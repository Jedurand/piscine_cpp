#include "Pony.hpp"

std::string Pony::rand_color()
{
	int i(std::rand() % 3);

	if (i == 0)
		return ("black");
	else if (i == 1)
		return ("white");
	else if (i == 2)
		return ("black and white");
	else if (i == 3)
		return ("Ginger");
	return ("Nul");
}

std::string Pony::rand_race()
{
	int i(std::rand() % 3);

	if (i == 0)
		return ("Pur sang arabe");
	else if (i == 1)
		return ("Alezan");
	else if (i == 2)
		return ("Gros etalon");
	else if (i == 3)
		return ("Super Pony");
	return ("Nul");
}

Pony::Pony()
{
	std::srand(std::time(NULL));
	std::cout << "Enter pony name: ";
	std::getline(std::cin, _name);
	_velocity = std::rand() % 100;
	_height = std::rand() % 200 + 100;
	_weight = std::rand() % 300 + 100;
	_stamina = std::rand() % 100;
	_race = rand_race();
	_color = rand_color();
}

void Pony::describe()
{
	std::cout << _name + " is a " + _color + " " + _race + " that weights " << _weight << "kg and mesures " << _height << "cm\n";
	std::cout << "Stamina: " << _stamina << ", velocity: " << _velocity << "\n";
}

void	ponyOnTheStack()
{
	Pony pony;
	pony.describe();
}

void ponyOnTheHeap()
{
	Pony *ponyHeap = new Pony;
	ponyHeap->describe();
	delete(ponyHeap);
}
