#include "Span.hpp"

Span::Span(): _max(5){}
Span::Span(unsigned int N): _max(N){}
Span::~Span(){}
Span::Span(const Span &other)
{
	this->_max = other._max;
	this->_vec = other._vec;
}

Span	&Span::operator=(const Span &other)
{
	if (this != &other)
	{
		this->_max = other._max;
		this->_vec = other._vec;
	}
	return (*this);
}

void	Span::addNumber(int i)
{
	if (_vec.size() < _max)
		_vec.push_back( i);
	else
		throw std::runtime_error("maximum size exceeded");
}

void	Span::shortestSpan()
{
	if (_vec.size() <= 1)
	{
		std::cout << "No span" << std::endl;
		return ;
	}
	int	n = INT_MAX;
	std::vector<int> tmp = _vec;
	std::sort(tmp.begin(), tmp.end());
	std::vector<int>::iterator it;
	it = tmp.begin();
	it++;
	while (it != tmp.end())
	{
		if (*it - *(it - 1) < n)
			n = *it - *(it - 1);
		it++;
	}
	std::cout << "Shortest Span is " << n << std::endl;
}

void	Span::longestSpan()
{
	if (_vec.size() <= 1)
	{
		std::cout << "No span" << std::endl;
		return ;
	}
	std::vector<int> tmp;
	tmp = _vec;
	std::sort(tmp.begin(), tmp.end());
	std::cout << "Longest Span is " << *(tmp.rbegin()) - *(tmp.begin()) << std::endl;
}