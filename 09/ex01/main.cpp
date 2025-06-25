#include "RPN.hpp"

int	main(int argc, char *argv[])
{
	try
	{
		std::stack<int> s;
		int 			temp;
		int 			i;
	
		if (argc != 2)
			throw std::runtime_error("Please use one arg");
		i = 0;
		fill_stack(s, argv[1]);
		if (s.size() == 1)
			throw std::runtime_error("Need two ints for an operation");
		std::cout << "Stack size" << s.size() << std::endl;
		while(argv[1][i] && s.size() != 1)
		{
			if (argv[1][i] == '+')
				add(s, &temp);
			else if (argv[1][i] == '-')
				substract(s, &temp);
			else if (argv[1][i] == '*')
				multiply(s, &temp);
			else if (argv[1][i] == '/')
				divide(s, &temp);
			else if (argv[1][i] != ' ' && isdigit(argv[1][i]) == 0)
				throw std::runtime_error("Invalid synthax");
			i++;
		}
		if (s.size() != 1)
			throw std::runtime_error("Invalid synthax");
		std::cout << s.top() << std::endl;
		return (0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
