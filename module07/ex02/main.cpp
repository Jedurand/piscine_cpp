#include "Array.hpp"

int main()
{
	Array <int>array1(8);
	array1[2] = 12;
	std::cout << array1[2] << std::endl;
//	std::cout << array1[12];
	
	Array <std::string>array2(4);
	array2[0] = "bonjour";
	array2[1] = "lol";
	array2[2] = "aurevoir";

	std::cout << "size: " << array1.size() << std::endl;

	std::cout << array2[0] << " " << array2[2] << std::endl;
	array2[2] = "NONONO";
	std::cout << array2[2] << std::endl;


	// copy
	Array <int>copy = array1;
	std::cout << copy[2] << std::endl;

	Array <std::string>copy2(array2);
	std::cout << copy2[2] << std::endl;

	array1[0] = 156;
	std::cout << copy[0] << std::endl;
	copy[0] = 23232;
	std::cout << array1[0] << std::endl;

	copy = array1;

	while(1);

	// test foireux
//	Array copy3(array2);

//	Array <char>arrayVoid;
//	std::cout << arrayVoid[0];	
	
	//array2[4] = "segfault";	
}
