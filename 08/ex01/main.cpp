#include "Span.hpp"

int	main()
{
	try
	{
		Span s(5);
		s.longestSpan();
		s.shortestSpan();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
}