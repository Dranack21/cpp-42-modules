#pragma once 

#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <algorithm>

template <typename T>
int	easyfind(T &l, int i)
{
	typename T::iterator it = std::find(l.begin(), l.end(),i);
	if (it == l.end())
		throw std::runtime_error("Did not find int i");
	std::cout << "Found int " << i << std::endl;
	return (*it);
}