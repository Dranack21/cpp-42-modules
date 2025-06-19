#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <limits>

class Span
{
	private:
		std::vector<int> _vec;
		size_t			_max;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();
		int	shortestSpan();
		int	longestSpan();
		template <typename iterator>
		void	bigADDER(iterator i, iterator i2)
		{
			if (std::distance(i, i2) + _vec.size() >= _max)
				throw std::runtime_error("maximum size exceeded");
			this->_vec.insert(_vec.end(), i, i2);
		}
		void	addNumber(int i);

};