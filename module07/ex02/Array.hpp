#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>

template<class T>
class Array
{
	public:
	class OutOfBoundsException: public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("Exception raised: Out of bounds");
		}
	};

	Array():_size(0), _array(new T[0])
	{

	};

	Array(unsigned int n): _size(n), _array(new T[n])
	{
		bzero(_array, n * sizeof(T));
	};

	~Array()
	{
		delete[] _array;
	};

	Array(const Array& array): _size(array._size), _array(new T[array._size])
	{
		for (unsigned int i = 0; i < array._size; i++)
			_array[i] = array._array[i];
	};

	void operator = (const Array& array)
	{
		if (_size > 0)
			delete[] (_array);
		_size = array._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < array._size; i++)
			_array[i] = array._array[i];
	};

	T& operator [](unsigned int i)
	{
		try
		{
			if (i >= _size)
				throw (std::exception());
			return (_array[i]);
		}
		catch (std::exception& e)
		{
			std::cout << "Index out of range, aborting ...\n";
			exit(1);
		}
			return (_array[i]);
	}

	const T& operator [](unsigned int i) const
	{
		try
		{
			if (i >= _size)
				throw (std::exception());
			return (_array[i]);
		}
		catch (std::exception& e)
		{
			std::cout << "Index out of range, aborting ...\n";
			exit(1);
		}
		return (_array[i]);
	}

	unsigned int size() const
	{
		return (_size);
	}

	private:
	unsigned int _size;
	T *_array;
};

#endif
