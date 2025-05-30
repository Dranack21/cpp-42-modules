/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 17:37:21 by habouda           #+#    #+#             */
/*   Updated: 2025/03/10 02:44:55 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"

int main()
{
	std::string	str;
	PhoneBook book;

	while (1)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, str);
		if (str == "ADD")
			book.set_contact();
		else if (str == "SEARCH")
			book.show_contacts();
		else if (str == "EXIT")
		{
			std::cout << "You just exited the Phonebook all data will be deleted";
			return (0);
		}
		else if (std::cin.eof() == true)
			{
				std::cout << std::endl << "You pressed ctrl D killing me";
				std::exit(0);
			}
		else
			std::cout << "Please enter a valid command (ADD, SEARCH, or EXIT)" << std::endl;
	}
	return (0);
}