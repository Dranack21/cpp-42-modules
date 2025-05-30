#include "ScalarConverter.hpp"

void	ConvertChar(const std::string &str)
{
	char c;

	c = str[0];	
	std::cout << "char: " << c << std::endl;
	if (c > std::numeric_limits<int>::max() || c < std::numeric_limits<int>::min())
		std::cout << "int: Impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(c) << std::endl;
	if (c > std::numeric_limits<float>::max() || c < std::numeric_limits<float>::min())
		std::cout << "float: Impossible" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	if (c > std::numeric_limits<double>::max() || c < std::numeric_limits<double>::min())
		std::cout << "double: Impossible" << std::endl;
	else
		std::cout << "double:" << static_cast<double>(c) << ".0" << std::endl;
}	

void ConvertDouble(const std::string &str)
{
	double f = atof(str.c_str());

	// CHAR
	if (f > std::numeric_limits<char>::max() || f < std::numeric_limits<char>::min())
		std::cout << "char: impossible" << std::endl;
	else if (isprint(static_cast<char>(f)))
		std::cout << "char: " << static_cast<char>(f) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	// INT
	if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	// FLOAT
	std::cout << std::fixed << std::setprecision(1);
	if (f > std::numeric_limits<float>::max() || f < -std::numeric_limits<float>::max())
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(f) << "f" << std::endl;
	// DOUBLE
	std::cout << "double: " << f << std::endl;
}


void ConvertFloat(const std::string &str)
{
	double f = atof(str.c_str());

	///// CHAR /////
	if (f > std::numeric_limits<char>::max() || f < std::numeric_limits<char>::min())
		std::cout << "char: impossible" << std::endl;
	else if (isprint(static_cast<char>(f)))
		std::cout << "char: " << static_cast<char>(f) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	///// INT /////
	if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	///// FLOAT /////
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(f) << "f" << std::endl;
	///// DOUBLE /////
	if (f > std::numeric_limits<double>::max() || f < -std::numeric_limits<double>::max())
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(f) << std::endl;
}


void ConvertSpecial(const std::string &str)
{
    if (str == "nan" || str == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else if (str == "+inf" || str == "+inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
    }
    else if (str == "-inf" || str == "-inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    }
    else
    {
        std::cout << "Unrecognized special value: " << str << std::endl;
    }
}
