#include "BitcoinExchange.hpp"

void	Fill_map(std::fstream &file)
{
	std::map<Date, double> map;
	std::string line;
	std::fstream file2;

	while(std::getline(file, line))
		Read_line(line ,map);
	file2.open("input.txt");
	Date tmp;
	double o = 0;
	char c = ' ';
		std::map<Date, double>::iterator it;
	while (std::getline(file2, line))
	{
		int result = sscanf(line.c_str(), "%d-%d-%d | %lf%c",&tmp.Year,&tmp.Month,&tmp.Day,&o,&c);
		if (result == 4 && c == ' ')
		{
			it = map.begin();
			while (!map[tmp])
			{
				
			}
			std::cout << "Year: " << tmp.Year << ", Month: " << tmp.Month << ", Day: " << tmp.Day << "=>" << f << std::endl;
		}
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
