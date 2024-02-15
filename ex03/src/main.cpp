/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:51:17 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/15 16:16:08 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"
# include "HumanA.hpp"
# include "HumanB.hpp"
# include <iostream>

# define RST "\033[0m"
# define GRY "\033[1;30m"
# define RED "\033[1;31m"
# define GRE "\033[1;32m"
# define YEL "\033[1;33m"
# define BLU "\033[1;34m"
# define MAG "\033[1;35m"
# define CYA "\033[1;36m"
# define WHI "\033[1;37m"

int	main(void)
{
	std::cout << "\033[2J\033[3J\033[H";

	std::cout << RED " --- TEST AVEC BOB (HumanA) --- " RST << std::endl;
	std::cout << BLU "Création de l'arme 9mm" RST << std::endl;
	Weapon gun = Weapon("9mm");
	std::cout << std::endl;
	std::cout << MAG "Création de HumanA Bob" RST << std::endl;
	HumanA bob("Bob", gun);
	std::cout << std::endl;
	std::cout << BLU "Attaque de Bob" RST << std::endl;
	bob.attack();
	std::cout << std::endl;
	std::cout << MAG "Changement d'arme pour un AK47" RST << std::endl;
	gun.setType("AK47");
	std::cout << std::endl;
	std::cout << BLU "Attaque de Bob (encore)" RST << std::endl;
	bob.attack();
	std::cout << std::endl << std::endl;

	std::cout << RED " --- TEST AVEC JIM (Human B) --- " RST << std::endl;
	std::cout << BLU "Création de HumanB Jim" RST << std::endl;
	HumanB jim("Jim");
	std::cout << std::endl;
	std::cout << MAG "Attaque de Jim" RST << std::endl;
	jim.attack();
	std::cout << std::endl;
	std::cout << BLU "Attribution de l'arme a Jim" RST << std::endl;
	jim.setWeapon(gun);
	std::cout << std::endl;
	std::cout << MAG "Attaque de Jim (encore)" RST << std::endl;
	jim.attack();
	std::cout << std::endl;
	std::cout << BLU "Changement d'arme pour un AK47" RST << std::endl;
	gun.setType("AK47");
	std::cout << std::endl;
	std::cout << MAG "Attaque de Jim (c'est un nerveux)" RST << std::endl;
	jim.attack();
	std::cout << std::endl << std::endl;

	return (0);
}
