#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void	ponyOnTheStack();
void	ponyOnTheHeap();

class Pony
{
	public:
	Pony();
	void		describe();
	std::string 	rand_color();
	std::string 	rand_race();

	private:
	int		_velocity;
	std::string	_race;
	std::string	_name;
	int		_height;
	int		_weight;
	int		_stamina;
	std::string	_color;
};
