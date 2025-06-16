/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 20:58:22 by habouda           #+#    #+#             */
/*   Updated: 2025/03/11 22:13:26 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

int	main()
{
	Zombie *bob;
	bob = newZombie("bob");
	bob->announce();
	randomChump("Susie");
	delete bob;
}

Zombie* newZombie(std::string name)
{
	Zombie *bob;
	bob = new Zombie(name);
	return (bob);
}

void randomChump(std::string name)
{
	Zombie Suzie = Zombie(name);
	Suzie.announce();
}
