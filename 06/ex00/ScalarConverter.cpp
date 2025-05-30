#include "ScalarConverter.hpp"

int	occurence_counter(const std::string &str, std::string c)
{
	if ((str.find_first_of(c) == str.find_last_of(c)) && str.find_first_of(c) != std::string::npos)
		return (1);
	return (0);
}

void	ScalarConverter::Convert(const std::string& str)
{
	e_type t;
	t = parse_type(str);
	switch(t)
	{
		case CHAR:
			std::cout << "\033[31mChar Literal\033[0m" << std::endl; // Red
			ConvertChar(str);
			break;
		case INT:
			std::cout << "\033[34mInt\033[0m" << std::endl; // Blue
			ConvertDouble(str);
			break;
		case FLOAT:
			std::cout << "\033[32mFloat\033[0m" << std::endl; // Green
			ConvertFloat(str);
			break;
		case DOUBLE:
			std::cout << "\033[33mDouble\033[0m" << std::endl; // Yellow
			ConvertDouble(str);
			break;
		case SPECIAL:
			ConvertSpecial(str);
			break;
		default:
			std::cout << "UNKNOWN TYPE" << std::endl;
			break;
	}
}

e_type	ScalarConverter::parse_type(const std::string& str)
{
	for(size_t i = 0 ; i < str.length();  i++)
	{
		if (i != 0 && (str[i] == '+' || str[i] == '-'))
			return (SPECIAL);
	}
	if (str.length() == 1 && std::isprint(str[0]))
	{
		if ((str.find_first_not_of("0123456789") != std::string::npos))
			return (CHAR);
	}
	if (str.find_first_of('.') != std::string::npos)
	{
		if(occurence_counter(str, ".") == 1)
		{
			if (str.find_first_not_of("0123456789-+.") == std::string::npos)
				return(DOUBLE);
			if (str.find_first_not_of("0123456789f-+.") == std::string::npos && occurence_counter(str, "f") && str[str.length() - 1] == 'f')
				return (FLOAT);
		}
	}
	if (!str.empty() && str.find_first_not_of("01234567890-+") == std::string::npos)
		return (INT);
	return (SPECIAL);
}
