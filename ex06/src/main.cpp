/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 08:18:05 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/17 09:09:54 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	std::cout << CLEAR << std::endl;
	
	std::string	arg;
	Harl		harl;

	switch (argc)
	{
		case (1):
			arg = "DEBUG";
			break ;
		case (2):
			arg = argv[1];
			break ;
		default:
			arg = "";
			break ;
	}
	harl.complain(arg);
	return (0);
}
