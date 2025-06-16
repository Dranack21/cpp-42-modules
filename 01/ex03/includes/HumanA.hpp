/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:25:20 by habouda           #+#    #+#             */
/*   Updated: 2025/03/12 18:17:33 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon &_Weapon;
	public:
		HumanA(std::string name, Weapon &Weapon);
		~HumanA(void);
		void	attack();
};

#endif