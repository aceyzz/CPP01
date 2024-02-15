/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:37:10 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/15 15:57:34 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(string name) : name(name), weapon(NULL)
{
	std::cout << "Constructor called for \"" << this->name << "\""<< std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "Destructor called for \"" << this->name << "\"" << std::endl;
}

void	HumanB::attack(void)
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " tried but can't attack (no weapons!)" << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}
