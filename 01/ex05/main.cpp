/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 15:06:52 by habouda           #+#    #+#             */
/*   Updated: 2025/03/23 15:53:01 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Harl.hpp"

int	main()
{
	Harl Harl_2_0;
	std::string line;
	int i;

	i = 0;
	Harl_2_0.complain("debug");
	Harl_2_0.complain("info");
	Harl_2_0.complain("warning");
	Harl_2_0.complain("error");
	while (i != 4)
	{
		std::cout << "Make Harl say something :";
		std::cin >> line;
		Harl_2_0.complain(line);
		i++;
	}
}