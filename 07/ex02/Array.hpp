#pragma once

#include <iostream>

template <typename T>
class	Array
{
	private:
		size_t	_size;
		T		*_array;
	public:

		Array(): _size(0), _array(NULL) {}

		Array(unsigned int n): _size(n), _array(new T[n]()) {}

		Array(const Array &other): _size(other._size)
		{
			this->_array = new T[_size];
			for (size_t i = 0; i < other._size ; ++i)
				_array[i] = other._array[i];
		}

		~Array() {delete[] _array;}

		Array	&operator=(const Array &other)
		{
			if (this != &other)
			{
				delete [] this->_array;
				this->_size = other._size;
				this->_array = new T[_size];
				for(int i = 0; i < other.size(); i++)
					this->_array[i] = other._array[i];
			}
			return (*this);
		}

		int		size() const {return (this->_size);}

		T	&operator[](int n)
		{
			if (n < 0 || n >= this->size())
				throw OutOfBounds();
			else
				return(_array[n]);
		}
		const T &operator[](int n) const
		{
			if (n < 0 || n >= this->size())
				throw OutOfBounds();
			else
				return(_array[n]);
		}
		class OutOfBounds: public std::exception
		{
			const char *what() const throw()
			{
				return("Invalid index out of bounds\n");
			}
		};

};