#include "BitcoinExchange.hpp"

int	main(int argc, char *argv[])
{
	Btc	btc;
	try 
	{
		if (argc != 2)
		{
			std::cout << "Please use the program with a file" << std::endl;
			return (1);
		}
		btc.Open_files(argv[1]);
		btc.Fill_map();
		btc.Read_input();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

bool	Date_parser(Date &d)
{
	if (d.Year > 2025 || d.Year < 2009)
		return (false);
	if (d.Month > 12 || d.Month < 1)
		return (false);
	if (d.Day > 31 || d.Day < 1)
		return (false);
	if (d.Month == 2)
    {
        if (d.Day > 29)
            return false;
        if (d.Day == 29)
        {
            if ((d.Year % 4 != 0) || (d.Year % 100 == 0 && d.Year % 400 != 0))
                return false;
        }
    }
	if (d.Month == 4 || d.Month == 6 || d.Month == 9 || d.Month == 11)
    {
        if (d.Day > 30)
            return false;
    }
	return (true);
}