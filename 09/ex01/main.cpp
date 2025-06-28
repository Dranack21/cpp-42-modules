#include "RPN.hpp"

int	main(int argc, char *argv[])
{
	try
	{
		RPN				stack;
		std::string		line;
	
		if (argc != 2)
			throw std::runtime_error("Please use one arg");
		line = argv[1];
		if (line.find_first_not_of("0123456789+-*/ ") != std::string::npos)
			throw std::runtime_error("Error: please use ints only and + - * / only");
		fill_stack(stack.s, argv[1]);
		stack.operator_count = 0;
		stack.digit_count = 0;
		if (stack.s.size() <= 1 || stack.s.size() >= 10)
			throw std::runtime_error("Error: Invalid stack size please use 2 to 9 numbers");
		calculate_rpn(argv[1], stack);
		std::cout << "Operator count: " << stack.operator_count << std::endl;
		std::cout << "Digit count: " << stack.digit_count << std::endl;
		
		if (stack.s.size() != 1 || stack.operator_count + 1 != stack.digit_count)
			throw std::runtime_error("Error: Unbalanced expression for RPN");
		std::cout << stack.s.top() << std::endl;
		return (0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
