/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:19:08 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/15 15:25:27 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA
{
	public:
		HumanA(string name, Weapon& weapon);
		~HumanA(void);

		void	attack();
	private:
		string	name;
		Weapon	&weapon;
};

#endif
