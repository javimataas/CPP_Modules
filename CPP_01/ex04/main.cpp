/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:48:00 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:16:52 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replace(std::string filename, std::string s1, std::string s2)
{
	std::string		line;
	std::ifstream	instream;
	std::ofstream	outstream;
	size_t			pos;

	instream.open(filename.c_str());
	if (!instream.is_open())
	{
		std::cout << "Error: " << filename << " not found." << std::endl;
		return ;
	}
	filename.append(".replace");
	outstream.open(filename.c_str());
	while (std::getline(instream, line))
	{
		pos = line.find(s1);
		while (pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos = line.find(s1);
		}
		outstream << line << std::endl;
	}
	instream.close();
	outstream.close();
}

int		main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Error: usage: ./replace <filename> <old_w> <new_w>" << std::endl;
		return (1);
	}
	std::string	filename(argv[1]);
	std::string s1(argv[2]);
	std::string	s2(argv[3]);
	if (filename.empty() || s1.empty() || s2.empty())
	{
		std::cout << "Error: empty args";
		return (1);
	}
	replace(filename, s1, s2);
	return (0);
}