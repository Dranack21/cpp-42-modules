#include "PmergeMe.hpp"


PmergeMe::PmergeMe()
{}

PmergeMe::~PmergeMe()
{}

std::vector<int> PmergeMe::make_initial_vec(int argc, char *argv[])
{
	std::vector<int> vec;

	for(int i = 1; i < argc; i++)
		vec.push_back(std::atoi(argv[i]));
	return (vec);
}
std::deque<int> PmergeMe::make_initial_deq(int argc, char *argv[])
{
	std::deque<int> deq;

	for(int i = 1; i < argc; i++)
		deq.push_back(std::atoi(argv[i]));
	return(deq);
}




std::vector<int> PmergeMe::sort_recursive_vec(std::vector<int> &input)
{
	std::vector<int>	pending;
	std::vector<int>	mainge;

	for (size_t i = 0; i < input.size(); i += 2)
{
    int a = input[i];
    if (i + 1 >= input.size())
    {
        pending.push_back(a);
        break;
    }
    int b = input[i + 1];
    if (a > b)
    {
        pending.push_back(a);
        mainge.push_back(b);
    }
    else
    {
        pending.push_back(b);
        mainge.push_back(a);
    }
}

	std::cout << "Vector mainge: ";
	for(std::vector<int>::iterator it = mainge.begin(); it != mainge.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "Vector pending: ";
	for(std::vector<int>::iterator it = pending.begin(); it != pending.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	return (mainge);
}

std::deque<int>  PmergeMe::sort_recursive_deque(std::deque<int> &input)
{
	std::deque<int>		pending;
	std::deque<int>		mainge;

	for (size_t i = 0; i < input.size(); i += 2)
	{
    	int a = input[i];
    	if (i + 1 >= input.size())
    	{
        	pending.push_back(a);
        	break;
    	}
    	int b = input[i + 1];
    	if (a > b)
    	{
        	mainge.push_back(a);
        	pending.push_back(b);
	    }
    	else
    	{
    	    mainge.push_back(b);
    		pending.push_back(a);
    	}
	}
	std::cout << "Deque mainge: ";
	for(std::deque<int>::iterator it = mainge.begin(); it != mainge.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "Deque pending: ";
	for(std::deque<int>::iterator it = pending.begin(); it != pending.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	return (mainge);
}
