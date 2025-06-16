#pragma once 

#include <iostream>
#include <list>
#include <vector>
#include <deque>

template <typename T>
int	easyfind(T &l, int i)
{
	typename T::iterator it = l.begin();
	while(it != l.end() && *it != i)
		it++;
	if (it == l.end())
		throw std::runtime_error("Did not find int i");
	std::cout << "Found int " << i << std::endl;
	return (*it);
}