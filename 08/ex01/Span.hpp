#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

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
		void	shortestSpan();
		void	longestSpan();
		typedef typename std::vector<int>::iterator iterator;
		void	bigADDER(iterator i, iterator i2);
		void	addNumber(int i);

};