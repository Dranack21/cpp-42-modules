#include "RPN.hpp"

void fill_stack(std::stack<int> &s, std::string line)
{
	if (line.empty())
		throw std::runtime_error("empty arg");
	for (std::string::const_reverse_iterator it = line.rbegin(); it != line.rend(); ++it)
	{
		if (isdigit(*it))
			s.push(*it - '0');
	}
}

void	calculate_rpn(std::string line, RPN &stack)
{
	int 			temp;
	int 			i = 0;

	while(line[i] && stack.s.size() != 1)
	{
		if (line[i] == '+')
			add(stack, &temp);
		else if (line[i] == '-')
			substract(stack, &temp);
		else if (line[i] == '*')
			multiply(stack, &temp);
		else if (line[i] == '/')
			divide(stack, &temp);
		else if (isdigit(line[i]))
			stack.digit_count++;
		else if (line[i] != ' ')
			throw std::runtime_error("Invalid synthax");
		i++;
	}
	if (line[i])
		throw std::runtime_error("Error: Extraneous characters at the end");
}	

void	add(RPN &s, int* y)
{
	*y = s.s.top();
	s.s.pop();
	*y = *y + s.s.top();
	s.s.pop();
	s.s.push(*y);
	s.operator_count++;
	if (s.operator_count >= s.digit_count)
		throw std::runtime_error("Error: Invalid synthax please respect the RPN synthax");
}

void	substract(RPN &s, int* y)
{
	*y = s.s.top();
	s.s.pop();
	*y =  *y - s.s.top();
	s.s.pop();
	s.s.push(*y);
	s.operator_count++;
	if (s.operator_count >= s.digit_count)
		throw std::runtime_error("Error: Invalid synthax please respect the RPN synthax");
}

void	multiply(RPN &s, int* y)
{
	*y = s.s.top();
	s.s.pop();
	*y = *y * s.s.top();
	s.s.pop();
	s.s.push(*y);
	s.operator_count++;
	if (s.operator_count >= s.digit_count)
		throw std::runtime_error("Error: Invalid synthax please respect the RPN synthax");
}

void	divide(RPN &s, int* y)
{
	*y = s.s.top();
	s.s.pop();
	if (s.s.top() == 0)
		throw std::runtime_error("cannot divide by 0 please go seek help");
	*y = *y / s.s.top();
	s.s.pop();
	s.s.push(*y);
	s.operator_count++;
	if (s.operator_count >= s.digit_count)
		throw std::runtime_error("Error: Invalid synthax please respect the RPN synthax");
}
