/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:12:09 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/15 12:32:52 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define string std::string

int	main(void)
{
	string	stringBAS = "HI THIS IS BRAIN";
	string	*stringPTR = &stringBAS;
	string	&stringREF = stringBAS;

	std::cout << "\033[2J\033[3J\033[H";

	std::cout << std::endl << "\033[1;32m --- MEMORY ADRESSES --- \033[0m" << std::endl;
	std::cout << "\033[1;32m|\033[0m " << "Bas:\t" << &stringBAS << "\033[1;32m\t|\033[0m" << std::endl;
	std::cout << "\033[1;32m|\033[0m " << "Ptr:\t" << &stringPTR <<  "\033[1;32m\t|\033[0m" << std::endl;
	std::cout << "\033[1;32m|\033[0m " << "Ref:\t" << &stringREF <<  "\033[1;32m\t|\033[0m" << std::endl;
	std::cout << "\033[1;32m ------------------------ \033[0m" << std::endl;

	std::cout << std::endl << "\033[1;34m -------- STRING VALUES -------- \033[0m" << std::endl;
	std::cout << "\033[1;34m|\033[0m " << "Bas:\t" << stringBAS << "\033[1;34m\t|\033[0m" << std::endl;
	std::cout << "\033[1;34m|\033[0m " << "Ptr:\t" << *stringPTR <<  "\033[1;34m\t|\033[0m" << std::endl;
	std::cout << "\033[1;34m|\033[0m " << "Ref:\t" << stringREF <<  "\033[1;34m\t|\033[0m" << std::endl;
	std::cout << "\033[1;34m ------------------------------- \033[0m" << std::endl << std::endl;

	return (0);
}
