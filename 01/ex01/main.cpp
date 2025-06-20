/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 22:27:01 by habouda           #+#    #+#             */
/*   Updated: 2025/03/12 14:35:29 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

int main()
{
	int 	N;
	int 	i;
	Zombie *Pointeur;

	N = 2;
	i = 0;
	Pointeur = zombieHorde(N, "Bob");
	while (i < N)
	{
		Pointeur[i].announce();
		i++;
	}
	delete [] Pointeur;
}