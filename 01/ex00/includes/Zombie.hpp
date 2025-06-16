/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 20:48:45 by habouda           #+#    #+#             */
/*   Updated: 2025/03/11 22:08:24 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie 
{
	private:
		std::string	_name;
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
};

void randomChump( std::string name);
Zombie* newZombie( std::string name);