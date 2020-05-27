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

template<typename T>
void iter(T array[], size_t size, void f(const T&))
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

void add_static(float& i)
{
	static float j = 0.1;
	i += j;
	j += 0.1;
}

template<typename T>
void add_static2(float& i)
{
	static float j2 = 0.1;
	i += j2;
	j2 += 0.1;
}

void bonjour(std::string& el)
{
	el += "bonjour";
}

template<typename T>
void print_el(const T& i)
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
	std::cout << "test add_1 to t[4] (1, 2, 3, 4) " << std::endl;
	iter(t, 4, add_1);
	iter(t, 4, print_el);
	std::cout << "test add_static (+0.1 on inrement) to float array" << std::endl;
	iter(t2, 10, add_static);
	iter(t2, 10, print_el);
	std::cout << std::endl;
	iter(t2, 10, add_static2<float>);
	iter(t2, 10, print_el);

	std::cout << "test on string array: ";
	iter(ts, 5, print_el);
	std::cout << "test adding string 'bonjour'" << std::endl;
	iter(ts, 5, bonjour);
	iter(ts, 5, print_el);
}

/*
class Awesome {

public:
Awesome( void ) : _n( 42 ) { return; }
int get( void ) const { return this->_n; }

private:
int _n;};


std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {

int tab[] = { 0, 1, 2, 3, 4 }; // <--- J'ai jamais compris pourquoi on peut pas ecrire int[] tab. Ca aurait plus de sens vous trouvez pas ?
Awesome tab2[5];

iter( tab, 5, print );
iter( tab2, 5, print );

return 0;
}
*/
