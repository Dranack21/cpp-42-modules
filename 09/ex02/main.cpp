#include "PmergeMe.hpp"

void	parse_args(int argc, char *argv[])
{
	std::string s;

	for(int i = 1; i < argc; i++)
	{
		s = argv[i];
		if (s.find_first_not_of("0123456789") != std::string::npos || atol(argv[i]) > 2147483647)///atol overflow returns long max///
			throw std::runtime_error("Error");
	}
}

int main(int argc, char *argv[])
{
	try 
	{
		std::vector<int> vec;
		std::deque<int> deq;
		if (argc == 1)
		{
			std::cout << "Please use a suite of integers with the program" << std::endl;
			return (0);
		}
		parse_args(argc, argv);
		vec = make_initial_vec(argc, argv);
		deq = make_initial_deq(argc, argv);
		std::cout << "Before:	";
		for (size_t i = 0; i < vec.size(); i++)
		std::cout << vec[i] << " ";
		std::cout << std::endl;
	
		unsigned long start = get_time_us();
		vec = sort_recursive_vec(vec);
		unsigned long end = get_time_us();
		unsigned long start2 = get_time_us();
		deq = sort_recursive_deque(deq);
		unsigned long end2 = get_time_us();
	
		std::cout << "After: 	";
		for (size_t i = 0; i < vec.size(); i++)
		std::cout << deq[i] << " ";
		std::cout << std::endl;
		
		std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << (end - start) << " us" << std::endl;
		std::cout << "Time to process a range of " << argc - 1 << " elements with std::deque : " << (end2 - start2) << " us" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}