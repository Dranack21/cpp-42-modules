/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 17:41:43 by habouda           #+#    #+#             */
/*   Updated: 2025/04/15 15:54:22 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	change_line(std::string line, std::string s1, std::string s2)
{
	size_t	pos;
	size_t	length;

	length = s1.length();
	if (length == 0)
		return (line);
	while (1)
	{
		pos = line.find(s1);
		if (pos == std::string::npos)
			break;
		line.erase(pos, length);
		line.insert(pos, s2);
	}
	return (line);
}

int	main(int argc, char *argv[])
{
	std::ifstream input_file;
	std::ofstream output_file;
	std::string filename;
	std::string s1;
	std::string s2;
	std::string		line;

	if (argc != 4)
	{
		std::cout << "Wrong args you must input a filename and two strings" << std::endl;
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	input_file.open(argv[1]);
	if (input_file.is_open() == true)
		output_file.open((filename + ".replace").c_str(), std::ios::out | std::ios::trunc);
	if (input_file.is_open() == true && output_file.is_open() == true)
	{
		while(std::getline(input_file, line))
		{
			line = change_line(line, s1, s2);
			output_file << line;
			if (input_file.peek() != EOF)
				output_file << std::endl;
		}
		output_file.close();
		input_file.close();
	}
	else if (!input_file.is_open() || !output_file.is_open())
	{
		if (input_file.is_open())
        	input_file.close();
    	std::cerr << "Error: Could not open file(s)" << std::endl;
    	return 1;
	}
	return (0);
}	