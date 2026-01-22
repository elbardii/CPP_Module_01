/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-bard <iel-bard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 04:45:00 by iel-bard          #+#    #+#             */
/*   Updated: 2026/01/22 04:45:00 by iel-bard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string	replaceAll(const std::string& content, const std::string& s1, const std::string& s2)
{
	std::string	result;
	size_t		pos = 0;
	size_t		found;

	if (s1.empty())
		return (content);
	while ((found = content.find(s1, pos)) != std::string::npos)
	{
		result += content.substr(pos, found - pos);
		result += s2;
		pos = found + s1.length();
	}
	result += content.substr(pos);
	return (result);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::string		filename = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];

	if (s1.empty())
	{
		std::cerr << "Error: s1 cannot be empty" << std::endl;
		return (1);
	}

	std::ifstream	infile(filename.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error: cannot open file '" << filename << "'" << std::endl;
		return (1);
	}

	std::string	content;
	std::string	line;
	bool		firstLine = true;

	while (std::getline(infile, line))
	{
		if (!firstLine)
			content += "\n";
		content += line;
		firstLine = false;
	}
	if (infile.eof() && !infile.bad())
	{
		// Check if original file ended with newline
		infile.clear();
		infile.seekg(-1, std::ios::end);
		char lastChar;
		if (infile.get(lastChar) && lastChar == '\n')
			content += "\n";
	}
	infile.close();

	std::string	newContent = replaceAll(content, s1, s2);

	std::ofstream	outfile((filename + ".replace").c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Error: cannot create output file '" << filename << ".replace'" << std::endl;
		return (1);
	}

	outfile << newContent;
	outfile.close();

	return (0);
}
