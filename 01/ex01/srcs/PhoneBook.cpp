/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:41:15 by habouda           #+#    #+#             */
/*   Updated: 2025/03/10 02:49:18 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
	this->_full = false;
	this->_remplace = 0;
	std::cout << "Hello welcome to my not so good phoneboook" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::set_contact(void)
{
	if (this->_full == false)
	{
		std::cout << "You are going to add a contact this will be contact number " << this->_index + 1 << std::endl;
		if (this->_index == 7)
		{
			this->_full = true;
			this->_contacts[this->_index].set_contact_info();
		}
		else
		{
			this->_contacts[this->_index].set_contact_info();
			this->_index++;
		}
	}
	else if (this->_full == true)
	{
		std::cout << "You have reached the maximum of contacts I will replace the oldest one" << std::endl;
		this->_contacts[this->_remplace].set_contact_info();
		if (this->_remplace == 7)
			this->_remplace = 0;
		else
			this->_remplace++;
	}
}

///input.compare(str) returns 0 if input is equal to str 
///input.compare(str) returns 1 if input is greater than str
///input.compare(str) returns -1 if input is smaller than str

void	PhoneBook::show_contacts()
{
	std::string input;
	int			index;

	if (this->_index == 0)
		std::cout << "Please add one contact before searching" << std::endl;
	else
	{
		std::cout << "What is the index of the contact you're searching for ?";
		std::getline(std::cin, input);
		while (input.length() != 1 || input.compare("1") < 0 || input.compare("8") > 0)
		{
			if (std::cin.eof() == true)
			{
				std::cout  << std::endl << "You pressed ctrl D killing me";
				std::exit(0);
			}
			std::cout << "Please enter a correct index (Number ranging from 1 to 8)" << std::endl;
			std::cout << "What is the index of the contact you're searching for ? :" ;
			std::getline(std::cin, input);
		}
		index = std::atoi(input.c_str());		/////c_str is needed because atoi doesnt expect a std::string but a C char///
		if (index > 0)
			this->_contacts[index - 1].get_contact(index - 1);
		else
			std::cout << "Please enter a positive integer ranging from 1 to 8" << std::endl;
	}
}
