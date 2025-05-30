#include "ScalarConverter.hpp"

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "Please launch the program with a value" << std::endl;
		return (0);
	}
	if (argc > 2)
	{
		std::cout << "Please launch the program with a single value" << std::endl;
		return (0);
	}
	ScalarConverter::Convert(argv[1]);
}


// int main()
// {
// 	ScalarConverter::Convert("1");
// 	ScalarConverter::Convert("42");
// 	ScalarConverter::Convert("2147483648");
// 	ScalarConverter::Convert("-2147483649");
// 	ScalarConverter::Convert("a");
// 	ScalarConverter::Convert("ddaaaaa");
// 	ScalarConverter::Convert("1.0f");
// 	ScalarConverter::Convert("45434.2f");
// 	ScalarConverter::Convert("0.00f");
// 	ScalarConverter::Convert("7.27");
// 	ScalarConverter::Convert("727272727.2");
// 	ScalarConverter::Convert("+inf");
// 	ScalarConverter::Convert("");
// }