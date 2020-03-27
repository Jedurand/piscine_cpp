#include <iostream>
#include <string>



template<typename T>
void iter(T array[], size_t size, void f(T))
{
	 if (size == 0 || f == 0)
		return ;
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}


template<typename T>
void iter(T array[], size_t size, void f(T&))
{
	 if (size == 0 || f == 0)
		return ;
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}

void add_1(int& i)
{
	i += 1;
}

template<typename T>
void add_static(T& i)
{
	static float j = 0.1;
	i += j;
	j += 0.1;
}

void bonjour(std::string& el)
{
	el += "bonjour";
}

template<typename T>
void print_el(T& i)
{
	std::cout << i << std::endl;
}

int main()
{
	int t[4];
	t[0] = 1;
	t[1] = 2;
	t[2] = 3;
	t[3] = 4;

	float t2[10] = {0};

	std::string ts[5] = {"lol", "richard", "henri", "hubert", "jose"};

	iter(t, 4, add_1);
	iter(t, 4, print_el);
	iter(t2, 10, add_static);
	iter(t2, 10, print_el);
	iter(ts, 5, print_el);

	iter(ts, 5, bonjour);
	iter(ts, 5, print_el);
}	
