/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 09:48:49 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/15 10:14:01 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "\033[2J\033[3J\033[H";

	std::cout << "\033[1;32mCréation du zombie (stack) depuis le main()\033[0m" << std::endl;
	Zombie z1("stack_john");
	std::cout << std::endl << std::endl;

	std::cout << "\033[1;33mCréation du zombie (heap) depuis le main()\033[0m" << std::endl;
	Zombie *z2 = newZombie("heap_john");
	std::cout << std::endl << std::endl;

	std::cout << "\033[1;34mCréation du zombie depuis le main via randomChump()\033[0m" << std::endl;
	randomChump("de-passage_john");
	std::cout << "Il faisait que passer..." << std::endl << std::endl << std::endl;

	std::cout << "\033[1;35mAppel de announce() pour stack_john\033[0m" << std::endl;
	z1.announce();
	std::cout << "\033[1;35mAppel de announce() pour heap_john\033[0m" << std::endl;
	z2->announce();
	std::cout << std::endl << std::endl;

	std::cout << "\033[1;31mDelete manuel de heap_john\033[0m" << std::endl;
	delete(z2);
	std::cout << "\033[1;31mDelete auto de stack_john\033[0m" << std::endl;
	return (0);
}
