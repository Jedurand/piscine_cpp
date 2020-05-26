#include <iostream>
#include <climits>
#include <string>

struct Data { std::string s1; int n; std::string s2; };

static char rand_alpha()
{
	char rand;

	rand = std::rand() % 3;
	std::cout << (int)rand << std::endl;
	if (rand == 0)
		return (std::rand() % (57 - 48) + 48);
	else if (rand == 1)
		return (std::rand() % (90 - 65) + 65);
	else
		return (std::rand() % (122 - 97) + 97);
}

void *serialize(void)
{
	unsigned char *p;
	unsigned char rand = 0;
	unsigned long i = 0;

	std::srand(std::time(NULL));
	p = new unsigned char[(8 + 8) * sizeof(char) + sizeof(int)];
	while (i < (8 + 8) * sizeof(char) + sizeof(int))
	{
		if (i > (8 * sizeof(char)) && i < (8 * sizeof(char) + sizeof(int)))
			rand = std::rand() % (255 - 0) + 0;
		else
			rand = rand_alpha();
		std::cout << (int)rand << std::endl;
		memset(&p[i], rand, 1);
		i++;
	}
	//std::cout << p << std::endl;
	return (reinterpret_cast<void*>(p));
}

Data *deserialize(void *raw)
{
	unsigned char *p;
	char s[9];
	Data *data = new Data;;


	p = reinterpret_cast<unsigned char*>(raw);
	//data = reinterpret_cast<Data*>(raw);

	memcpy(&s, p, 8 * sizeof(char));
	s[8] = 0;
	data->s1 = std::string(s);
	memcpy(&s, &p[8 * sizeof(char) + sizeof(int)], 8 * sizeof(char));
	s[8] = 0;
	data->s2 = std::string(s);
	memcpy(&data->n, &p[8 * sizeof(char)], sizeof(int));

	return (data);
}

int main()
{
	void *p = serialize();

	Data *data = deserialize(p);

	std::cout << data->s1 << " " << data->n << " " << data->s2 << std::endl;
//	delete p;
}
