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
	bool operator!=(const Date &other) const;
	
};
class	Btc
{
	private:
		std::map<Date, double>	_map;
		Date					_date;
		std::fstream 			_input;
		std::fstream 			_data;
	public:
		Btc();
		Btc(const Btc &other);
		Btc &operator=(const Btc &other);
		~Btc();

		void	Open_files(std::string file);
		void	Fill_map();
		void	Read_input();
		void	Fill_keys(std::string &line);
};


void	Read_data(std::string &line, std::map<Date, double> &map);
bool	Date_parser(Date &d);
