/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:19:02 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/16 16:30:07 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(string filename, string origin, string replace)
: filename(filename), origin(origin), replace(replace), newFilename(filename + ".replace")
{
	std::cout << GRY "* Constructor called (sed) *" RST << std::endl;
	// std::cout << GRY "Filename:\t" RST << filename << std::endl;
	// std::cout << GRY "Origin:\t\t" RST << origin << std::endl;
	// std::cout << GRY "Replace:\t" RST << replace << std::endl;
	// std::cout << GRY "Filename:\t" RST << newFilename << std::endl;
	// std::cout << std::endl;
}

Sed::~Sed(void)
{
	std::cout << GRY "* Destructor called (sed) *" RST << std::endl;
	std::cout << std::endl;
}

string	Sed::getFilename(void)
{
	return (this->filename);
}

string	Sed::getOrigin(void)
{
	return (this->origin);
}

string	Sed::getReplace(void)
{
	return (this->replace);
}

string	Sed::getNewFilename(void)
{
	return (this->newFilename);
}
