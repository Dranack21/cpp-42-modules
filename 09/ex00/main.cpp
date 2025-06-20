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

	file.open("input.txt");
	std::string line;
	int i = 0;
	int y = 0;
	double o = 0;
	int z = 0;
	char c = ' ';
	while (std::getline(file, line))
	{
		int result = sscanf(line.c_str(), "%d-%d-%d | %lf%c",&i,&y,&z,&o,&c);
		if (result == 4 && c == ' ')
			std::cout << "i: " << i << ", y: " << y << ", z: " << z << std::endl;
	}
}