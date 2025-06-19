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
		_vec.push_back(i);
	else
		throw std::runtime_error("maximum size exceeded");
}

int	Span::shortestSpan()
{
	int	n = INT_MAX;
	long diff;

	if (_vec.size() <= 1)
		throw std::runtime_error("Size below or equal to 1");

	std::vector<int> tmp = _vec;
	std::sort(tmp.begin(), tmp.end());
	std::vector<int>::iterator it;

	it = tmp.begin();
	it++;
	while (it != tmp.end())
	{
		diff = static_cast<long>(*it) - static_cast<long>(*(it - 1));
		if (diff < INT_MIN || diff > INT_MAX)
			throw std::runtime_error("Overfload when doing comparaison");
		if (diff < n)
			n = static_cast<int>(diff);
		it++;
	}
	std::cout << "Shortest Span is " << n << std::endl;
	return (n);
}

int	Span::longestSpan()
{
	long diff;

	if (_vec.size() <= 1)
		throw std::runtime_error("Size below or equal to 1");
	std::vector<int> tmp;
	tmp = _vec;
	std::sort(tmp.begin(), tmp.end());

	diff = static_cast<long>(*(tmp.rbegin())) - static_cast<long>(*(tmp.begin()));
	if (diff > INT_MAX || diff < INT_MIN)
		throw std::runtime_error("Span too big int overflow");
	std::cout << "Longest Span is " << *(tmp.rbegin()) - *(tmp.begin()) << std::endl;
	return (*(tmp.rbegin()) - *(tmp.begin()));
}

