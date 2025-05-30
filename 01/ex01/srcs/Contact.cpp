/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 21:15:26 by habouda           #+#    #+#             */
/*   Updated: 2025/03/10 02:56:12 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

std::string Contact::_field_names[5] = 
{
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};

Contact::Contact(void)
{
	int i;

	i = 0;
	while (i != 5)
	{
		this->_data[i] = std::string();
		i++;
	}
	return ;
}

Contact::~Contact(void)
{	
}

void	Contact::set_contact_info()
{
	int i;

	i = 0;
	while (i != 5)
	{
		std::cout << "Please enter the contact " << this->_field_names[i] << ":";
		while (!(std::getline(std::cin, this->_data[i])) || this->_data[i].length() == 0)
		{
			if (std::cin.eof() == true)
			{
				std::cout << std::endl << "You pressed ctrl D killing me";
				std::exit(0);
			}
			if (this->_data[i].length() == 0)
			{
				std::cout << "Field cannot be empty" << std::endl;
				std::cout << "Please enter the contact " << this->_field_names[i] << ":";
			}
		}
		i++;
	}
	std::cout << "Contact Added Succesfully" << std::endl;
	return ;
}

void	Contact::get_contact(int index)
{
	int 	i;
	size_t	size;

	i = 0;	
	if (this->_data[i].length() == 0)
	{
		std::cout << "This contact doesnt exist" << std::endl;
		return ;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|         "<< index + 1;
	while (i < 3)
	{
		if (this->_data[i].length() > 10)
		{
			this->_data[i].resize(9);
			std::cout  << "|" << this->_data[i] << ".";
		}
		else if (this->_data[i].length() <= 10)
		{
			size = 10 - this->_data[i].length();
			std::cout << "|";
			while(size != 0)
			{
				std::cout << " ";
				size--;
			}
			std::cout << this->_data[i];
		}
		i++;
	}
	std::cout << "|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
}
