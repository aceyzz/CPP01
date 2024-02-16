/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:56:18 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/16 16:30:53 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

static int	errExit(const string errMsg)
{
	std::cout << std::endl;
	std::cout << "--- " << RED "ERROR" RST << " --------------------------------" << std::endl;
	std::cerr << YEL << errMsg << RST << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	std::cout << std::endl;
	return (1);
}

static bool	checkArguments(Sed *sed)
{
	if (sed->getOrigin().empty() || sed->getReplace().empty() || sed->getFilename().empty())
		return (false);
	std::ifstream fileStream(sed->getFilename().c_str());
	if (!fileStream.is_open())
		return (false);
	else
		fileStream.close();
	return (true);
}

static bool	checkFile(Sed *sed)
{
	/* ouverture du fichier et init du stringstream */
	std::ifstream fileStream(sed->getFilename().c_str());
	std::stringstream buffer;
	/* lecture du dans le buffer, puis stocke dans content */
	buffer << fileStream.rdbuf();
	string content = buffer.str();
	fileStream.close();
	/* Check si <str1> est dans le fichier (erreur sinon) */
	if (content.find(sed->getOrigin()) == string::npos)
		return (false);
	return (true);
}

static void	letsReplace(Sed *sed)
{
	std::ifstream fileStream(sed->getFilename().c_str(), std::ios::binary);
	if (!fileStream.is_open())
		return ((void)errExit("Fatal(1): ouverture lors de letsReplace()."));
	
	std::stringstream buffer;
	buffer << fileStream.rdbuf();
	string content = buffer.str();
	fileStream.close();

	string origin = sed->getOrigin();
	string replace = sed->getReplace();
	std::size_t pos = 0;
	std::size_t lastPos = 0;
	string result;

	while ((pos = content.find(origin, pos)) != string::npos)
	{
		result.append(content, lastPos, pos - lastPos); // Add content jusqu'à l'occurrence
		result += replace; // Ajouter replace
		pos += origin.length(); // Déplace pos après l'occurrence
		lastPos = pos; // Mettre à jour lastPos pour le prochain ajout
	}
	result += content.substr(lastPos);

	std::ofstream dstFile(sed->getNewFilename().c_str(), std::ios::binary);
	if (!dstFile.is_open())
		return ((void)errExit("Fatal(2): ouverture lors de letsReplace()."));

	dstFile << result;
	dstFile.close();
}

static void	showLinkOutput(Sed *sed, char **env)
{
	string file = sed->getNewFilename();
	string pwd;
	
	for (int i = 0; env[i] != nullptr; i++)
	{
		string envVar(env[i]);
		if (envVar.substr(0, 4) == "PWD=")
		{
			pwd = envVar.substr(4);
			break;
		}
	}
	std::cout << std::endl;
	std::cout << GRY " ---------------------------------------" << std::endl;
	std::cout << BLU "  ** The output file can be found at **" << std::endl;
	std::cout << CYA << pwd << "/"<< file << std::endl;
	std::cout << GRY " ---------------------------------------" RST << std::endl;
	std::cout << std::endl;
}

int	main(int argc, char **argv, char **env)
{
	std::cout << CLEAR;
	if (argc != 4)
		return (errExit("Usage: ./replace <filename> <str1> <str2>."));
	argv = argv + 1;
	Sed	sed(argv[0], argv[1], argv[2]);
	if (checkArguments(&sed) == false)
		return (errExit("Bad arguments: File not openable and/or empty arguments."));
	if (checkFile(&sed) == false)
		return (errExit("File empty and/or <str1> not in file."));
	letsReplace(&sed);
	showLinkOutput(&sed, env);
	return (0);
}
