/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:14:21 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/16 15:42:13 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include "tools.hpp"

class Sed
{
	public:
		Sed(string filename, string origin, string replace);
		~Sed();
		string getFilename(void);
		string getOrigin(void);
		string getReplace(void);
		string getNewFilename(void);
	private:
		string filename;
		string origin;
		string replace;
		string newFilename;
};

#endif
