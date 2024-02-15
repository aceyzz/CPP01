/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:02:44 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/15 15:33:59 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

# define string std::string

class Weapon
{
	public:
		Weapon(string type);
		~Weapon(void);

		const string& getType();
		void setType(string newType);
	private:
		string	type;
};

#endif
