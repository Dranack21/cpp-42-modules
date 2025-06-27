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
	// Print before sorting
	std::cout << "Before: ";
	for (size_t i = 0; i < vec.size(); i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;
	std::cout << std::endl;
	
	// Sort
	vec = m.sort_recursive_vec(vec);
	deq = m.sort_recursive_deque(deq);
	
	// Print after sorting
	std::cout << "After: ";
	for (size_t i = 0; i < vec.size(); i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;
}