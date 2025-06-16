/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 15:06:52 by habouda           #+#    #+#             */
/*   Updated: 2025/04/15 02:31:00 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Harl.hpp"

int	get_level(std::string level)
{
	if (level.compare("DEBUG") == 0)
		return (0);
	if (level.compare("INFO") == 0)
		return (1);
	if (level.compare("WARNING") == 0)
		return (2);
	if (level.compare("ERROR") == 0)
		return (3);
	return (4);
}

int	main(int argc, char *argv[])
{
	Harl Harl_2_0;

	if (argc != 2)
	{
		std::cout << "Must have a singular argument of filter" << std::endl;
		return (1);
	}
	Harl_2_0.complain(argv[1]);
}