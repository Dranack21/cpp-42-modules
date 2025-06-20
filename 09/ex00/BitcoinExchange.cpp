#include "BitcoinExchange.hpp"

void	Fill_map(std::fstream &file)
{
	std::map<Date, double> map;
	std::string line;

	while(std::getline(file, line))
		Read_line(line ,map);
	std::map<Date, double>::iterator it = map.begin();
	while(it != map.end())
	{
		std::cout << "Year :" << it->first.Year << " Month "<< it->first.Month << " Day :" << it->first.Day << std::endl;
		it++;
	}
}

void	Read_line(std::string &line, std::map<Date, double> &map)
{
	Date d;	
	double exchange = -0.5;
	char c = 'e';

	if (sscanf(line.c_str(), "%d-%d-%d,%lf%c", &d.Year, &d.Month, &d.Day, &exchange,&c) == 4)
		map[d] = exchange;
}


bool Date::operator<(const Date &other) const
{
	if (this->Year < other.Year)
		return (true);
	if (this->Year > other.Year)
		return (false);
	if (this->Month < other.Month)
		return (true);
	if (this->Month > other.Month)
		return (false);
	if (this->Day < other.Day)
		return (true);
	return(false);
}
