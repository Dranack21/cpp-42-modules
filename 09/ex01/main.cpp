#include "RPN.hpp"

int	main(int argc, char *argv[])
{
	try
	{
		std::stack<int> s;
		int 			temp;
		int 			i;
		int 			digit_counter = 0;
		int				operator_counter = 0;
	
		if (argc != 2)
			throw std::runtime_error("Please use one arg");
		i = 0;
		fill_stack(s, argv[1]);
		if (s.size() == 1 || s.size() >= 10)
			throw std::runtime_error("Error: Invalid stack size please use 2 to 9 numbers");
		std::cout << "Stack size" << s.size() << std::endl;
		while(argv[1][i] && s.size() != 1)
		{
			if (argv[1][i] == '+')
			{
				operator_counter++;
				if (operator_counter >= digit_counter)
					throw std::runtime_error("Error: Invalid synthax please respect the RPN synthax");
				add(s, &temp);
			}
			else if (argv[1][i] == '-')
			{
				operator_counter++;
				if (operator_counter >= digit_counter)
					throw std::runtime_error("Error: Invalid synthax please respect the RPN synthax");
				substract(s, &temp);
			}
			else if (argv[1][i] == '*')
			{
				operator_counter++;
				if (operator_counter >= digit_counter)
					throw std::runtime_error("Error: Invalid synthax please respect the RPN synthax");
				multiply(s, &temp);
			}
			else if (argv[1][i] == '/')
			{
				operator_counter++;
				if (operator_counter >= digit_counter)
					throw std::runtime_error("Error: Invalid synthax please respect the RPN synthax");
				divide(s, &temp);
			}
			else if (isdigit(argv[1][i]))
				digit_counter++;
			else if (argv[1][i] != ' ')
				throw std::runtime_error("Invalid synthax");
			i++;
		}
		if (s.size() != 1 || operator_counter + 1 != digit_counter)
			throw std::runtime_error("Error: Unbalanced expression for RPN");
		std::cout << s.top() << std::endl;
		return (0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
