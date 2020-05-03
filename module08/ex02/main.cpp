#include "Stack.hpp"

int main()
{
	MutantStack<int> stack;


	std::cout << stack.size() << " " << stack.empty() << std::endl;

	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.push(5);

	std::cout << stack.top() << std::endl;
	stack.print();

	MutantStack<int> stack_cpy(stack);
	stack_cpy.print();


	MutantStack<int>::Iterator it;
	it = stack.begin();
	std::cout << *it << std::endl;
	++it;
	std::cout << *it << std::endl;
	it++;
	std::cout << *it << std::endl;

	MutantStack<int>::Iterator it2 = stack.begin();
	//it2 = stack.begin();
	MutantStack<int>::Iterator it_end;
	it_end = stack.end();

	*it = 158;

	while (it2 != it_end)
	{
		std::cout << "yeah: " << *it2;
		it2++;
	}
	stack.pop();
	std::cout << std::endl;

}
