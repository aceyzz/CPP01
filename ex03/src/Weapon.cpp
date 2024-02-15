/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:06:44 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/15 15:58:48 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#include <iostream>

Weapon::Weapon(string type) : type(type)
{
	std::cout << "Constructor called for \"" << this->type << "\"" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Destructor called for \"" << this->type << "\"" << std::endl;
}

const string& Weapon::getType(void)
{
	return (this->type);
}

void Weapon::setType(string newType)
{
	this->type = newType;
}
