#include "BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Please use the program with a file" << std::endl;
		return (1);
	}
	(void)argv;
	std::fstream file;
	file.open("data.csv");
	if (file.is_open() == false)
	{
		std::cout << "Error opening data.csv" << std::endl;
		return (1);
	}
	Fill_map(file);
	file.close();

}