#include "Span.hpp"

int	main()
{
	try
	{
		Span s(5);
		s.addNumber(0);
		s.addNumber(200);
		s.addNumber(10000);
		s.addNumber(20000);
		s.addNumber(20001);
		s.longestSpan();
		s.shortestSpan();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Span s(20000);
		for (int i = 0;  i != 20000 ; i++)
			s.addNumber(i);
		s.longestSpan();
		s.shortestSpan();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Span s(200);
		int arr[] = {0, 23, 34, 324, 2};
		std::vector<int> tmp(arr, arr + sizeof(arr) / sizeof(int));
		s.bigADDER(tmp.begin(), tmp.end());
		s.longestSpan();
		s.shortestSpan();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}