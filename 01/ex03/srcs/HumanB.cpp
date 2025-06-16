/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:15:28 by habouda           #+#    #+#             */
/*   Updated: 2025/03/12 18:06:24 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) : _Weapon(NULL), _name(name)
{
	
}

HumanB::~HumanB()
{
	
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << this->_Weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &Weapon)
{
	this->_Weapon = &Weapon;
}
