/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:14:57 by habouda           #+#    #+#             */
/*   Updated: 2025/03/10 15:15:23 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBERABLE FEEDBACK NOISE *";
		return (0);
	}
	while (argv[i])
	{
		while (argv[i][j])
		{
			std::cout << (char)std::toupper(argv[i][j]);
			j++;
		}
		j = 0;
		i++;
		if (argv[i] != NULL)
			std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
