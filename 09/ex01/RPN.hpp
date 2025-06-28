#pragma once

#include <iostream>
#include <stack>
#include "string.h"
#include <string>

struct RPN
{
	std::stack<int> s;
	int				operator_count;
	int				digit_count;
};

void	fill_stack(std::stack<int>&s, std::string line);
void	calculate_rpn(std::string line, RPN &stack);
void	add(RPN &s, int* y);
void	substract(RPN &s, int* y);
void	multiply(RPN &s, int *y);
void	divide(RPN &s, int* y);