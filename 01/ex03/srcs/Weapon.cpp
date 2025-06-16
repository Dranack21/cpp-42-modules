/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:16:23 by habouda           #+#    #+#             */
/*   Updated: 2025/04/14 22:37:08 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;	
}

Weapon::~Weapon()
{
	
}

const std::string&  Weapon::getType()
{
	return (this->_type);
}
void	Weapon::setType(std::string weapon)
{
	this->_type = weapon;
}