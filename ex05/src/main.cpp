/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 08:18:05 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/17 08:37:34 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	std::cout << CLEAR << std::endl;
	
	Harl	harl;

	std::cout << GRY " -- Complains Level 1 --" RST << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;
	
	std::cout << GRY " -- Complains Level 2 --" RST << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;
	
	std::cout << GRY " -- Complains Level 3 --" RST << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;
	
	std::cout << GRY " -- Complains Level 4 --" RST << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;

	std::cout << GRY " -- No valid complain --" RST << std::endl;
	harl.complain("TEST");
	std::cout << std::endl;

	std::cout << GRY " -- Empty complain () --" RST << std::endl;
	harl.complain("");
	std::cout << std::endl;

	return (0);
}
