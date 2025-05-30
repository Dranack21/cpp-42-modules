/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:57:48 by habouda           #+#    #+#             */
/*   Updated: 2025/03/08 18:18:03 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class Contact {

	private:
		static	std::string	_field_names[5];
		std::string			_data[5];
	public:
		Contact(void);
		~Contact(void);
		void	set_contact_info();
		void	get_contact (int index);
};
#endif
