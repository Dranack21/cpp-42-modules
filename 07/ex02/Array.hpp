#pragma once

#include <iostream>

template <typename T>
class	Array
{
	private:
		T		*_array;
		size_t	_size;
	public:
		Array(): _array(NULL), _size(0)
		{
		}
		Array(unsigned int n):
		_size(n)
		{
			_array = new T[n]();
			for(unsigned int i = 0 ; i < n ; i++)
			{
				this->_array[i] = 0;
			}
		}
		Array(const Array &other)
		{
			this->_size = other._size;
			for (size_t i = 0; i < other.size ; ++i)
				_array[i] = other._array[i];
		}
		Array	&operator=(const Array &other)
		{
			if (this != &other)
			{
				this->_size = other._size;
				delete []_array;
				for(int i = 0; other.size(); i++)
					_array[i] = other[i];
			}
			return (*this);
		}
		int		size()
		{
			return (this->_size);
		}
		class OutOfBounds: public std::exception
		{
			const char *what() const throw()
			{
				return("Invalid index out of bounds\n");
			}
		};
		T	&operator[](int n)
		{
			if (n < 0 || n >= this->size())
				throw OutOfBounds();
			else
				return(_array[n]);
		}

};