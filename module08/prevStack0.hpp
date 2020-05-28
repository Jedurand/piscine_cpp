#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>
#include <string>
#include <stack>

template<class T>
class MutantStack: public std::stack
{
	private:
	class El
	{
		public:
		T	_el;
		El	*_next;
	};

	public:
	class Iterator
	{
		public:
		El		*_el;

		// overloads:
		Iterator()
		{
			_el = NULL;
		};

		Iterator(const Iterator& it)
		{
			_el = it._el;
		};

		Iterator(El* el)
		{
			_el = el;
		};

		void operator = (const Iterator& it)
		{
			_el = it._el;
		};

		T& operator * ()
		{
			return (_el->_el);
		};
		Iterator operator ++ ()
		{
			_el = _el->_next;
			return (*this);
		};

		Iterator operator ++ (int)
		{
			Iterator b;

			b._el = _el;
			_el = _el->_next;
			return (b);
		};

		bool operator == (const Iterator& iter)
		{
			if (_el == iter._el)
				return true;
			return false;
		};

		bool operator != (const Iterator& iter)
		{
			if (_el != iter._el)
				return true;
			return false;
		};

		void operator = (El* el)
		{
			_el = el;
		};


	};


	public:
	MutantStack()
	{
		_stack = NULL;
		_size = 0;
	};

	~MutantStack()
	{
		El *next;
		while (_stack)
		{
			next = _stack->_next;
			delete (_stack);
			_stack = next;
		}
	};

	MutantStack(const MutantStack& stack)
	{
		El *bstack;
		El *b;
		Iterator it;

		_size = stack._size;
		bstack = stack._stack;
		it = stack.begin();
		while (*it)
		{
			b = new El;
			b->_el = *it;
			it++;
			// Ajouter dans le desorde;

		}

	};

	void operator = (const MutantStack& stack)
	{
		El *prev = _stack;
		El *bstack;

		while (_stack)
		{
			prev = _stack;
			_stack = _stack->next;
			delete (prev);
		}
		_stack = NULL;
		bstack = stack._stack;
		while (bstack)
		{
				push(bstack->_el);
				bstack = bstack->next;
		}
	};

	void operator = (const T& t);

	T& 				top()
	{
			return (_stack->_el);
	};
	bool			empty()
	{
		if (_size == 0)
			return (true);
		else
			return (false);
	};
	unsigned int	size()
	{
			return (_size);
	};

	void		push(const T& el)
	{
		El	*bstack;

		if (!_stack)
		{
			_stack = new El;
			_stack->_el = el;
			_stack->_next = NULL;
		}
		else
		{
			bstack = new El;
			bstack->_next = _stack;
			bstack->_el = el;
			_stack = bstack;
		}
		_size += 1;
	};

	void		pop()
	{
		El	*bstack;

		if (!_stack)
			return ;
		bstack = _stack;
		_stack = _stack->_next;
		delete (bstack);
		_size -= 1;
	};

	void		print()
	{
		El *bstack = _stack;

		while (bstack)
		{
			std::cout << bstack->_el << std::endl;
			bstack = bstack->_next;
		}
	};

	El* begin()
	{
		return (_stack);
	};

	El* end()
	{
		El* bstack = _stack;
		for (int i = 0; i < _size; i++)
			bstack = bstack->_next;
		return (bstack);
	};

	private:
	El     *_stack;

	unsigned int	_size;
};

#endif
