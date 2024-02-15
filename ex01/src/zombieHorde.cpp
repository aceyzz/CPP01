/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:39:13 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/15 12:04:27 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie  *horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        std::string newName = name + std::to_string(i + 1);
        horde[i].setName(newName);
    }
    return (horde);
}
