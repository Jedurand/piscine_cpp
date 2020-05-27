#include <iostream>
#include <string>

class Awesome {

public:

Awesome( int n ) : _n( n ) {}

bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }

public:

int _n;
};

std::ostream& operator << (std::ostream& out, const Awesome& awesome)
{
	return (out << awesome._n);
}

template<typename T>
void swap(T& a, T& b)
{
	T c = b;
	b = a;
	a = c;
}

template<typename T>
T& min(T& a, T& b)
{
	if (b <= a)
		return (b);
	return (a);
}

template <typename T>
T& max(T& a, T& b)
{
	if (b >= a)
		return (b);
	return (a);
}

template<typename T>
T min(const T& a, const T& b)
{
	if (b <= a)
		return (b);
	return (a);
}

template <typename T>
T max(const T& a, const T& b)
{
	if (b >= a)
		return (b);
	return (a);
}

int main()
{
	int a = 1;
	int b = 2;
	Awesome aw1(42);
	Awesome aw2(43);

	std::cout << a << " " << b << std::endl;
	::swap(a, b);
	std::cout << "After swap: " << a << " " << b << std::endl;
	std::cout << "min " << a << " " << b << ": " << ::min(a, b) << std::endl;
	std::cout << "max " << a << " " << b << ": " << ::max(a, b) << std::endl;
	std::cout << ::max(a, b) << std::endl;
	std::cout << ::max(12, 1) << " " << ::max(12.150, 12.150) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "With strings: " << c << " " << d << std::endl;
	std::cout << "min" << ::min(c, d) << std::endl;
	std::cout << c << " " << d << std::endl;
	::swap(c, d);
	std::cout << "After swap " << c << " " << d << std::endl;

	std::cout << "Awesoming: " << std::endl;

	std::cout << aw1 << " " << aw2 << std::endl;
	::swap(aw1, aw2);
	std::cout << "After swap: " << aw1 << " " << aw2 << std::endl;
	std::cout << "min " << aw1 << " " << aw2 << ": " << ::min(aw1, aw2) << std::endl;
	std::cout << "max " << aw1 << " " << aw2 << ": " << ::max(aw1, aw2) << std::endl;
	std::cout << ::max(aw1, aw2) << std::endl;

}
