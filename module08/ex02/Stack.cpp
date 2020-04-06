#include "Stack.hpp"
/*
template<typename T>
MutantStack<T>::MutantStack()
{
	_stack = nullptr;
	_size = 0;
//	_container_type = "MutantStack";
	_size_type = "Unsigned int";
}

template<typename T>
MutantStack<T>::~MutantStack()
{
	T *next;
	while (_stack)
	{
		next = _stack->_next;
		delete (_stack->_el);
		_stack = next;
	}
}
*/
template<typename T>
MutantStack<T>::MutantStack(const MutantStack& stack)
{

}

template<typename T>
void MutantStack<T>::operator = (const MutantStack& stack)
{

}

///////// ACCES METHODS
/*
template<typename T>
T* MutantStack<T>::top()
{
	return (_stack->el);
}

/*template<typename T>
bool MutantStack<T>::empty()
{
	if (_size == 0)
		return (true);
	else
		return (false);
}

template<typename T>
unsigned int MutantStack<T>::size()
{
	return (_size);
}

///////// Modification methods

template<typename T>
void MutantStack<T>::push(const T& el)
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

template<typename T>
void MutantStack<T>::pop()
{
	El	*bstack;

	if (!_stack)
		return ;
	bstack = _stack;
	_stack = _stack->next;
	delete (bstack);
	_size -= 1;
}

template<typename T>
void MutantStack<T>::print()
{
	El *bstack = _stack;

	while (bstack)
	{
		std::cout << bstack->_el << std::endl;
		bstack = bstack->next;
	}
}*/


//void Stack::swap(const
/*
template<typename T>
bool MutantStack<T>::Iterator::operator == (const Iterator& iter)
{
	if (_el->_el == iter->_el)
		return true;
	return false;
}

template<typename T>
bool MutantStack<T>::Iterator::operator != (const Iterator& iter)
{
	if (_el->_el != iter->_el)
		return true;
	return false;
}

template<typename T>
T& MutantStack<T>::Iterator::operator *(Iterator& it)
{
	return (_el->_el);
}

template<typename T>
MutantStack<T>::Iterator& MutantStack<T>::Iterator::operator++()
{
	it->_el = it->_el->next;
}

template<typename T>
void MutantStack<T>::Iterator::operator = (const Iterator& it)
{
	_el = it.el;
}
*/
/*
Stack::Iterator& Stack::Iterator::operator--()
{
	_el = _el->_prev_el;
	return (_el);
}*/
