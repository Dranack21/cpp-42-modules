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

size_t jacobsthal(size_t n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    size_t j0 = 0;
    size_t j1 = 1;
    size_t jn = 0;
    for (size_t i = 2; i <= n; ++i) {
        jn = j1 + 2 * j0;
        j0 = j1;
        j1 = jn;
    }
    return jn;
}

std::vector<int> PmergeMe::sort_recursive_vec(std::vector<int> &input)
{
	std::vector<int>	pending;
	std::vector<int>	mainge;

	if (input.size() <= 1)
		return input;
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
	mainge = sort_recursive_vec(mainge);
	//INSERT FUNCTION//
	return (mainge);
}

std::deque<int>  PmergeMe::sort_recursive_deque(std::deque<int> &input)
{
	std::deque<int>		pending;
	std::deque<int>		mainge;

	if (input.size() <= 1)
		return input;
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
	mainge = sort_recursive_deque(mainge);
	//INSERT FUNCTION//
	return (mainge);
}



