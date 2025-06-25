#include "RPN.hpp"

void	fill_stack(std::stack<int> &s, std::string line)
{
	 if (line.empty())
        throw std::runtime_error("empty arg");
    for (std::string::const_reverse_iterator it = line.rbegin(); it != line.rend(); ++it)
    {
        if (isdigit(*it))
			s.push(*it - '0');
	}

}

void	add(std::stack<int>& s, int* y)
{
	*y = s.top();
	s.pop();
	*y = *y + s.top();
	s.pop();
	s.push(*y);
}

void	substract(std::stack<int>& s, int* y)
{
	*y = s.top();
	s.pop();
	*y =  *y - s.top();
	s.pop();
	s.push(*y);
}

void	multiply(std::stack<int>& s, int* y)
{
	*y = s.top();
	s.pop();
	*y = *y * s.top();
	s.pop();
	s.push(*y);
}

void	divide(std::stack<int>& s, int* y)
{
	*y = s.top();
	s.pop();
	if (s.top() == 0)
		throw std::runtime_error("cannot divide by 0 please go seek help");
	*y = *y / s.top();
	s.pop();
	s.push(*y);
}