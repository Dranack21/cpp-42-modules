#include "PmergeMe.hpp"

int main(int argc, char *argv[])
{
	PmergeMe m;
	std::vector<int> vec;
	std::deque<int> deq;
	if (argc == 1)
	{
		std::cout << "Please use a suite of integers with the program" << std::endl;
		return (0);
	}


	vec = m.make_initial_vec(argc, argv);
	deq = m.make_initial_deq(argc, argv);
	m.sort_recursive_vec(vec);
	m.sort_recursive_deque(deq);
}