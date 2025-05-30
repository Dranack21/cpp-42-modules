#pragma once

#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <ctype.h>
#include <cctype>
#include <string>
#include <limits>
#include <iomanip>

enum e_type {
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	SPECIAL,
};
class ScalarConverter
{
	private:
		static	e_type	parse_type(const std::string& str);
	public:
		static	void Convert(const std::string& str);
};

void	ConvertChar(const std::string &str);
void	ConvertFloat(const std::string &str);
void	ConvertDouble(const std::string &str);
void	ConvertSpecial(const std::string &str);