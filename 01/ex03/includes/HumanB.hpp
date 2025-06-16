/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:25:28 by habouda           #+#    #+#             */
/*   Updated: 2025/03/12 18:06:11 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon *_Weapon;
		std::string _name;
	public:
		HumanB(std::string name);
		~HumanB(void);
		void	attack();
		void	setWeapon(Weapon &Weapon);
};

#endif