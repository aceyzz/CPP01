/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:00:16 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/15 12:09:54 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cctype>
#include <iomanip>
#include <string>

#define string std::string

bool	isEmptyLine(string input)
{
	for (size_t i = 0; i < input.length(); i++)
	{
		if (input[i] != ' ' && input[i] != '\t' && input[i] != '\n'
			&& input[i] != '\r' && input[i] != '\v' && input[i] != '\f')
			return (false);
	}
	return (true);
}

void	askInput(int *count, string *name)
{
	string input;

	while (!std::cin.eof())
	{
		try
		{
			std::cout << "Entrez le nombre de zombie dans la horde: ";
			std::getline(std::cin, input);
			*count = std::stoi(input);
			if (*count > 0)
				break;
			else
				std::cout << *count << " n'est pas un nombre valide" << std::endl;
		}
		catch (const std::invalid_argument& e)
		{
			std::cout << "Erreur: " << e.what() << std::endl;
		}
	}
	while (!std::cin.eof())
	{
		std::cout << "Entrez le nom des zombies dans la horde: ";
		std::getline(std::cin, *name);
		if (!isEmptyLine(*name))
			break;
		else
		{
			*name = "DefaultName";
			break ;
		}
	}
}

int	main(void)
{
	std::cout << "\033[2J\033[3J\033[H";

	string	name;
	int		count;

	askInput(&count, &name);
	
	std::cout << std::endl;
	std::cout << "\033[1;32mNombre de zombies: \033[0m" << count << std::endl;
	std::cout << "\033[1;32mNoms des zombies: \033[0m" << name << std::endl << std::endl;
	
	std::cout << "\033[1;35mInit des zombies avec zomdieHorde\033[0m" << std::endl;
	Zombie *horde = zombieHorde(count, name);
	std::cout << std::endl;

	std::cout << "\033[1;35mBoucle des announce()\033[0m" << std::endl;
	for (int i = 0; i < count; i++)
		horde[i].announce();
	std::cout << std::endl;

	std::cout << "\033[1;32mDelete manuel de la horde\033[0m" << std::endl;
	delete [] horde;
	std::cout << std::endl;

	return (0);
}
