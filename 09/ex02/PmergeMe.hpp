#pragma once

#include "vector"
#include "deque"
#include "iostream"
#include "cstdlib"
#include <utility>
#include <string>
#include <cmath>
#include <sys/time.h>
#include <limits>


#include "PmergeMe.hpp"



std::vector<int> make_initial_vec(int argc, char *argv[]);
std::deque<int> make_initial_deq(int argc, char *argv[]);
size_t jacobsthal(size_t n) ;
std::vector<int> insert_binary_vector(std::vector<int> &mainge, std::vector<int> &pending);
std::deque<int> insert_binary_deque(std::deque<int> &mainge, std::deque<int> &pending);
std::vector<int> sort_recursive_vec(std::vector<int> &input);
std::deque<int>  sort_recursive_deque(std::deque<int> &input);
void remove_duplicates_vector(std::vector<int> &vec);
void remove_duplicates_deque(std::deque<int> &vec);
unsigned long get_time_us();
