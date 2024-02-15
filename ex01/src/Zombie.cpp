/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:37:10 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/15 12:09:57 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "(default constructor)" << std::endl;
}

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << "* " << this->name << " * (constructor)" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "* " << this->name << " * (destructor)" << std::endl;
}

void    Zombie::announce(void)
{
	std::cout << this->name;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}
