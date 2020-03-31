#include "Stack.hpp"

Stack::Stack()
{
	_stack = nullptr;
	_size = 0;
	_container_type = "MutantStack";
	_size_type = "Unsigned int";
}

Stack::~Stack()
{
	T *next;
	while (_stack)
	{
		next = _stack->_next;
		delete (_stack->);
		_stack = next;
	}
}

Stack::Stack(const Stack& stack)
{

}

void Stack::operator = (const Stack& stack)
{

}

///////// ACCES METHODS

T* Stack::top()
{
	return (_stack->el);
}

bool Stack::empty()
{
	if (_size == 0)
		return (true);
	else
		return (false);
}

unsigned int Stack::size()
{
	return (_size);
}

///////// Modification methods

void Stack::push(const T& el)
{
	El	*bstack;

	if (!_stack)
	{
		_stack = new El;
		_stack->_el = el;
		_stack->next = nullptr;
	}
	else
	{
		bstack = new El;
		bstack->next = _stack;
		bstack->_el = el;
		_stack = bstack;
	}
	_size += 1;
}

void Stack::pop()
{
	El	*bstack;
	
	if (!_stack)
		return ;
	bstack = _stack;
	_stack = _stack->next;
	delete (bstack);
	_size -= 1;
}


void Stack::print()
{
	El *bstack = _stack;
	
	while (bstack)
	{
		std::cout << _el << std::endl;
		bstack = bstack->next;
	}
}


//void Stack::swap(const

bool Stack::Iterator::operator == (const Iterator& iter)
{
	if (_el->_el == iter->_el)
		return true;
	return false;
}

bool Stack::Iterator::operator != (const Iterator& iter)
{
	if (_el->_el != iter->_el)
		return true;
	return false;
}

T& Stack::Iterator::operator *()
{
	return (_el->_el);
}

Stack::Iterator& Stack::Iterator::operator++()
{
	_el = _el->_next;
	return (_el);
}

Stack::Iterator& Stack::Iterator::operator--()
{
	_el = _el->_prev_el;
	return (_el);
}
		
