/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:58:58 by habouda           #+#    #+#             */
/*   Updated: 2025/03/10 02:41:49 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include <iostream>
#include "Contact.hpp"

class PhoneBook {

	private:
		Contact _contacts[8];
		int		_index;
		bool	_full;
		int		_remplace;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	set_contact(void); 
		void	show_contacts(void);
};

#endif