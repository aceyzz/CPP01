/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:23:30 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/15 15:57:09 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

#include <iostream>

HumanA::HumanA(string name, Weapon& weapon) : name(name), weapon(weapon)
{
	std::cout << "Constructor called for \"" << this->name;
	std::cout << "\" with the weapon \"" << this->weapon.getType() << "\"" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "Destructor called for \"" << this->name;
	std::cout << "\" with the weapon \"" << this->weapon.getType() << "\"" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
