#include "Array.hpp"

int main()
{
	std::cout << "Testing on <int>array with size 8\n";
	Array <int>array1(8);
	array1[2] = 12;
	std::cout << array1[2] << std::endl;
	std::cout << "Size: " << array1.size() << std::endl;
//	std::cout << array1[12];

	std::cout << "Testing on <string>Array of size 3\n";
	Array <std::string>array2(3);
	array2[0] = "bonjour";
	array2[1] = "lol";
	array2[2] = "aurevoir";

	std::cout << array2[0] << std::endl;
	std::cout << array2[1] << std::endl;
	std::cout << array2[2] << std::endl;
	std::cout << "size: " << array2.size() << std::endl;

	std::cout << "Rewriting <string>Array[2]:\n";
	std::cout << array2[2] << std::endl;
	array2[2] = "NONONO";
	std::cout << array2[2] << std::endl;

	std::cout << "Testing With <int>const Array - Uncomment to try to rewrite an element\n";
	const Array <int>iconst(4);
	std::cout << iconst[0] << std::endl;
	/*iconst[0] = 12;
	std::cout << iconst[0];*/

	std::cout << "Creating empty array\n";
	Array<int> empty;
	std::cout << "Size of empty array: " << empty.size() << std::endl;

	// copy
	std::cout << "Testing Caplien form\n";
	std::cout << "Copy constructor:\n";
	Array <int>copy = array1;
	std::cout << "Array original[2]: " << array1[2] << std::endl;
	std::cout << "Array copied[2]: " << copy[2] << std::endl;

	std::cout << "Assignation overload:\n";
	Array <int>copy2(24);
	std::cout << "Copy[2]: Before copy: " << copy2[2] << std::endl;
	copy2 = array1;
	std::cout << "Array[2]: " << array1[2] << std::endl;
	std::cout << "Copy2[2]: " << copy2[2] << std::endl;

	std::cout << "Changing values:\n";
	array1[2] = 124;
	std::cout << "Array1[2]: " << array1[2] << std::endl;
	std::cout << "copy[2]: " << copy[2] << std::endl;
	std::cout << "copy2[2]: " << copy2[2] << std::endl;


	std::cout << "Uncomment for testing exceptions: \n";
	//std::cout << copy2[123] << std::endl;
	//std::cout << copy2[-1] << std::endl;
	std::cout << copy2[7] << std::endl;
}
