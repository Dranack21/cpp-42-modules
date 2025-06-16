/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:15:26 by habouda           #+#    #+#             */
/*   Updated: 2025/03/12 18:17:25 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon) : _name(name), _Weapon(Weapon)
{
	
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_Weapon.getType() << std::endl;
}