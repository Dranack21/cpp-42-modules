#pragma once

#include <iostream>
#include <stack>
#include "string.h"

void	fill_stack(std::stack<int>&s, std::string line);
void	add(std::stack<int>& s, int* y);
void	substract(std::stack<int>& s, int* y);
void	multiply(std::stack<int>& s, int *y);
void	divide(std::stack<int>& s, int* y);