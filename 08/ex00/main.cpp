#include "easyfind.hpp"

int	main()
{
	try{
		///LISTS////
		std::list<int> l;
		l.push_front(1);
		l.push_front(2);
		l.push_front(3);
		::easyfind(l, 2);
		////VECTORS/////
		std::vector<int> vec;
		vec.push_back(-1);
		vec.push_back(12);
		vec.push_back(-45);
		::easyfind(vec, -45);
		std::deque<int> deq;
		deq.push_back(-1);
		deq.push_back(12);
		deq.push_back(-45);
		::easyfind(deq, 0);

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}