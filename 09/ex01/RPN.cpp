#include "RPN.hpp"

void	fill_stack(std::stack<int> &s, std::string line)
{
	int 	i;

	i = strlen(line.c_str()) - 1;
	if (i == -1)
		throw std::runtime_error("empty arg");
	while(line[i])
	{
		if (isdigit(line[i]))
			s.push(line[i] - '0');
		i--;
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
	*y = *y / s.top();
	s.pop();
	s.push(*y);
}