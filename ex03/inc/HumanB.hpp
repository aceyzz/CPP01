/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:35:36 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/15 15:45:28 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB(string name);
		~HumanB(void);

		void attack(void);
		void setWeapon(Weapon& weapon);
	private:
		string	name;
		Weapon	*weapon;
};

#endif
