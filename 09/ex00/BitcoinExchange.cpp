#include "BitcoinExchange.hpp"

Btc::Btc(){}
Btc::~Btc(){}
Btc::Btc(const Btc &other){this->_map = other._map;}
Btc &Btc::operator=(const Btc &other){ if (this != &other) {this->_map = other._map;} return (*this);}



void	Btc::Open_files(std::string file)
{
	this->_input.open(file.c_str());
	if (this->_input.is_open() == false)
		throw std::runtime_error("Can't open file given in paramaters");
	this->_data.open("data.csv");
	if (this->_data.is_open() == false)
		throw std::runtime_error("Can't open data file");
}

///READS FROM
void	Btc::Fill_map()
{
	std::string	line;
	std::map<Date, double>::iterator it;

	while(std::getline(this->_data, line))
		Read_data(line ,this->_map);
}

void	Read_data(std::string &line, std::map<Date, double> &map)
{
	Date d;	
	double exchange = -0.5;
	char c = 'e';

	if (sscanf(line.c_str(), "%d-%d-%d,%lf%c", &d.Year, &d.Month, &d.Day, &exchange,&c) == 4)
		map[d] = exchange;
}

void	Btc::Read_input()
{
	std::string	line;

	///// READS THE INPUT.TXT AND FILLS THE KEYS THEN PRINTS OR THROWS/////
	while (std::getline(this->_input, line))
	{
		try
		{
			this->Fill_keys(line);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	this->_input.close();
	this->_data.close();
}

void	Btc::Fill_keys(std::string &line)
{
	int			result;
	char		c = ' ';
	double		owned = 0;
	std::map<Date, double>::iterator it;
	
	result = sscanf(line.c_str(), "%d-%d-%d | %lf%c",&this->_date.Year,&this->_date.Month,&this->_date.Day,&owned,&c);
	it = this->_map.upper_bound(this->_date);

	if (line == "date | value")
		return ;
	if (c != ' ' || result > 4)
		throw std::runtime_error("Error: Extraneous characters in line.");
	if (result < 4)
		throw std::runtime_error("Error: Invalid format please refer to this format : Year-Month-Day | value");
	if (owned < 0)
		throw std::runtime_error("Error: not a positive number.");
	if (owned > 1000)
		throw std::runtime_error("Error: Value must be below 1000");
	if (this->_date != it->first && it == this->_map.begin())
		throw std::runtime_error("Error: No Btc value found at this date or any date prior");
	if (Date_parser(this->_date) == false)
		throw std::runtime_error("Error: Date doesnt exist or exists before btc invention");
	if (owned != owned)
		throw std::runtime_error("Error: Don't use nan please");
	if (this->_date != it->first)
		it--;
	std::cout << this->_date.Year << "-" << this->_date.Month << "-" << this->_date.Day << " => " << owned << " = "<< it->second  * owned << std::endl;
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

bool Date::operator!=(const Date &other) const
{
	if (this->Year == other.Year && this->Month == other.Month && this->Day == other.Day)
		return (false);
	return(true);
}