/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 22:27:06 by habouda           #+#    #+#             */
/*   Updated: 2025/03/11 23:02:43 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(void);
		~Zombie(void);
		void	Set_Name(std::string name);
		void	announce();
};

Zombie* zombieHorde( int N, std::string name );