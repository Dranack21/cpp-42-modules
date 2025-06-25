#pragma once

#include "vector"
#include "deque"
#include "iostream"
#include "cstdlib"
#include <utility>

class PmergeMe
{
	private:
		std::vector<int>							_main_vec;
		std::deque<int>								_main_deque;
		std::vector<int>							_small_vec;
		std::deque<int>								_small_deque;
		std::vector<std::pair<int, int> > 			vec_p;
		std::deque<std::pair<int, int> > 			deq_p;

	public:
		PmergeMe();
		~PmergeMe();
		void	make_initial_pairs(int argc,char *argv[]);

		std::vector<int> make_initial_vec(int argc, char *argv[]);
		std::deque<int>  make_initial_deq(int argc, char *argv[]);
		std::vector<int> sort_recursive_vec(std::vector<int> & input);
		std::deque<int>  sort_recursive_deque(std::deque<int> & input);

};
