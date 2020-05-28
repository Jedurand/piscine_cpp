#include "MutantStack.hpp"

int main()
{
	/*
	MutantStack<int> stack;


	std::cout << stack.size() << " " << stack.empty() << std::endl;

	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.push(5);

	std::cout << stack.top() << std::endl;
	stack.print();

	//MutantStack<int> stack_cpy(stack);
	//stack_cpy.print();


	MutantStack<int>::Iterator it;
	it = stack.begin();
	std::cout << "*it " << *it << std::endl;
	std::cout << "++it " << *(++it) << std::endl;
	std::cout << "*it " << *it << std::endl;
	std::cout << "it++ " << *(it++) << std::endl;
	std::cout << "*it " << *it << std::endl;

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
	std::cout << std::endl;*/
	MutantStack<int>    mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	MutantStack<int> s(mstack);

	MutantStack<int>::iterator it2 = s.begin();
	MutantStack<int>::iterator ite2 = s.end();
	++it2;
	--it2;
	while(it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}

	MutantStack<int> ms2;

	ms2 = mstack;

	MutantStack<int>::iterator it3 = ms2.begin();
	MutantStack<int>::iterator ite3 = ms2.end();
	++it3;
	--it3;
	while(it3 != ite3)
	{
		std::cout << *it3 << std::endl;
		*it3 = 42;
		++it3;
	}

	it3 = ms2.begin();
	ite3 = ms2.end();
	++it3;
	--it3;
	while(it3 != ite3)
	{
		std::cout << *it3 << std::endl;
		++it3;
	}
	std::cout << ms2.size();
	return (0);
}
