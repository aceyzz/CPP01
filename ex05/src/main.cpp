/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 08:18:05 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/17 08:27:29 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	std::cout << CLEAR << std::endl;
	
	Harl	harl;

	std::cout << GRY " -- Complains Level 1 --" RST << std::endl;
	harl.complain("debug");
	std::cout << std::endl;
	
	std::cout << GRY " -- Complains Level 2 --" RST << std::endl;
	harl.complain("info");
	std::cout << std::endl;
	
	std::cout << GRY " -- Complains Level 3 --" RST << std::endl;
	harl.complain("warning");
	std::cout << std::endl;
	
	std::cout << GRY " -- Complains Level 4 --" RST << std::endl;
	harl.complain("error");
	std::cout << std::endl;

	std::cout << GRY " -- No valid complain --" RST << std::endl;
	harl.complain("test");
	std::cout << std::endl;

	std::cout << GRY " -- Empty complain () --" RST << std::endl;
	harl.complain("test");
	std::cout << std::endl;

	return (0);
}
