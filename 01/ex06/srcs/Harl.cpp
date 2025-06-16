/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 15:07:38 by habouda           #+#    #+#             */
/*   Updated: 2025/04/15 02:36:58 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl()
{
	
}

Harl::~Harl()
{
	
}

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}



void Harl::complain(std::string level)
{
	int i;
	int j;
	///return type/// (class name *pointer name) //// (args)
	void (Harl::*functions[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	i = 0;
	j = get_level(level);
	switch(j)
	{
		case 0:
			i = 0;
			std::cout << "[ DEBUG ]" << std::endl;
			break;
		case 1:	
			i = 1;
			std::cout << "[ INFO ]" << std::endl;
			break;
		case 2:
			i = 2;
			std::cout << "[ WARNING ]" << std::endl;
			break;
		case 3:
			i = 3;
			std::cout << "[ ERROR ]" << std::endl;
			break;
	}
	if (j == 4)
	{
		std::cout << " Probably complaining about insignificant problems" << std::endl;
		return ;
	}
	while (i != 4)
	{
		(this->*functions[i])();
		i++;
	}
}