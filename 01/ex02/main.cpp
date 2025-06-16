/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:39:16 by habouda           #+#    #+#             */
/*   Updated: 2025/03/12 14:59:03 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string original_string;
	std::string *stringPTR;
	std::string stringREF;

	original_string = "HI THIS IS BRAIN";
	stringREF = original_string;
	stringPTR = &original_string;

	std::cout << "The memory address of the string variable : " << &original_string << std::endl;
	std::cout << "The memory address held by stringPTR : " << stringPTR << std::endl;
	std::cout <<"The memory address held by stringREF : " << &stringREF << std::endl;

	std::cout << "The value of the string variable :" << original_string << std::endl;
	std::cout << "The value pointed to by stringPTR :" << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF :" << stringREF << std::endl;
}