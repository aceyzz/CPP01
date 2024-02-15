/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 09:32:21 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/15 10:11:48 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
