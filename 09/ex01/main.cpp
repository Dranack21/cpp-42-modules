#include "RPN.hpp"

int	main(int argc, char *argv[])
{
	try
	{
		RPN				stack;
		int 			i;
	
		if (argc != 2)
			throw std::runtime_error("Please use one arg");
		i = 0;
		fill_stack(stack.s, argv[1]);
		stack.operator_count = 0;
		stack.digit_count = 0;
		calculate_rpn(argv[1], stack);
		if (stack.s.size() == 1 || stack.s.size() >= 10)
			throw std::runtime_error("Error: Invalid stack size please use 2 to 9 numbers");
		std::cout << "Stack size" << stack.s.size() << std::endl;
		
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
