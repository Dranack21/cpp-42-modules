/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 20:58:38 by habouda           #+#    #+#             */
/*   Updated: 2025/03/11 22:13:53 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " died " << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name;
	std::cout << ": BraiiiiiiinnnzzzZ...";
	std::cout << std::endl;
}