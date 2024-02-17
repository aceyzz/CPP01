/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 07:57:09 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/17 09:06:54 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	// std::cout << GRY "Constructor called Harl." RST << std::endl << std::endl;
}

Harl::~Harl(void)
{
	// std::cout << GRY "Destructor called Harl." RST << std::endl << std::endl;
}

void	Harl::debug(void)
{
	std::cout << GRY "[ DEBUG ]" << std::endl;
	std::cout << BLU "I love having extra bacon for my 7XL";
	std::cout<< "-double-cheese-triple-pickle-special-ketchup burger. ";
	std::cout << "I really do!" RST << std::endl;
	std::cout << std::endl;
}

void	Harl::info(void)
{
	std::cout << GRY "[ INFO ]" << std::endl;
	std::cout << MAG "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn’t be asking for more!" RST << std::endl;
	std::cout << std::endl;
}

void	Harl::warning(void)
{
	std::cout << GRY "[ WARNING ]" << std::endl;
	std::cout << YEL "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you started ";
	std::cout << "working here since last month." RST << std::endl;
	std::cout << std::endl;
}

void	Harl::error(void)
{
	std::cout << GRY "[ ERROR ]" << std::endl;
	std::cout << RED "This is unacceptable! I want to speak to the manager now." RST << std::endl;
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string complains[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*funcPtr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int		indexLevel = -1;

	for (int i = 0; i < 4; i++)
	{
		if (level == complains[i])
		{
			indexLevel = i;
			break ;
		}
	}	

	switch (indexLevel)
	{
		case (0):
			(this->*funcPtr[0])();
		case (1):
			(this->*funcPtr[1])();
		case (2):
			(this->*funcPtr[2])();
		case (3):
			(this->*funcPtr[3])();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
			break ;
	}

	return ;
}
