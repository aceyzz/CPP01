/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 07:57:09 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/17 08:37:08 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << GRY "Constructor called Harl." RST << std::endl << std::endl;
}

Harl::~Harl(void)
{
	std::cout << GRY "Destructor called Harl." RST << std::endl << std::endl;
}

void	Harl::debug(void)
{
	std::cout << BLU "I love having extra bacon for my 7XL";
	std::cout<< "-double-cheese-triple-pickle-special-ketchup burger. ";
	std::cout << "I really do!" RST << std::endl;
}

void	Harl::info(void)
{
	std::cout << MAG "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn’t be asking for more!" RST << std::endl;
}

void	Harl::warning(void)
{
	std::cout << YEL "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you started ";
	std::cout << "working here since last month." RST << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED "This is unacceptable! I want to speak to the manager now." RST << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string complains[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*funcPtr[4])(void);

	funcPtr[0] = &Harl::debug;
	funcPtr[1] = &Harl::info;
	funcPtr[2] = &Harl::warning;
	funcPtr[3] = &Harl::error;

	for (int i = 0; i < 4; i++)
	{
		if (level == complains[i])
			return ((this->*funcPtr[i])());
	}
	std::cout << "Blablabla... Not important." << std::endl;
	return ;
}
