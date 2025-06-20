#pragma once

#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <cstdlib>

#include <iostream>
#include <exception>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <map>
#include <iomanip>
#include <limits>
#include <cmath>

struct Date
{
	int Year;
	int Month;
	int Day;
	
	bool operator<(const Date &other) const;
	
};

void	Fill_map(std::fstream &file);
void	Read_line(std::string &line, std::map<Date, double> &map);

