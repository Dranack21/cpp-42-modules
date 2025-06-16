/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 22:38:47 by habouda           #+#    #+#             */
/*   Updated: 2025/03/11 23:15:46 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int i;

	i = 0;
	Zombie *Zombie_horde;

	if (N <= 0)
		return (NULL);
	Zombie_horde = new Zombie[N];
	while (i < N)
	{
		Zombie_horde[i].Set_Name(name);
		i++;
	}
	return (Zombie_horde);
}