/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 15:07:38 by habouda           #+#    #+#             */
/*   Updated: 2025/04/15 02:24:48 by habouda          ###   ########.fr       */
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
	///return type/// (class name *pointer name) //// (args)
	void (Harl::*functions[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string tab[4] = {"debug", "info", "warning", "error"};

	i = 0;
	while (i != 4)
	{
		if (level == tab[i])
		{
			(this->*functions[i])();
			return ;
		}
		i++;
	}
	if (i == 4)
		std::cout << " Probably complaining about insignificant problems" << std::endl;
}