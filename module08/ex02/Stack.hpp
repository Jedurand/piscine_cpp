#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>
#include <string>

template<typename T>
class Stack
{
	class El
	{
		private:
		T	_el;
		El	*_next;
		El	*_prev;
	}
	
	class Iterator
	{
		public:
		El<T>		*_el;
		El<T>		*_prev_el;

		// overloads:
		/*
		<< >>
		+ - < > == = != += -=
		++ --
		*/
	}
			

	public:
	Stack();
	~Stack();
	Stack(const Stack& stack);
	void operator = (const Stack& stack);

	void operator = (const T& t);

	T* 		top();
	bool		empty();
	unsigned int	size();

	void		push(const T& el);
	void		pop();
	void		swap(const T& b);

	void		print();
	
	private:
	El     *_stack;

	unsigned int	_size;

	std::string _container_type;
	std::string _value_type;
	std::string _size_type;
	
	
};

#endif
