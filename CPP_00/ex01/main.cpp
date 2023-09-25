/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:24:12 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:13:25 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

// Delete blank chars of input
std::string ft_clean_spaces_upper(std::string str)
{
	int first;
	int last;

	first = str.find_first_not_of(" \t\n\v\f\r");
	last = str.find_last_not_of(" \t\n\v\f\r");
    return (str.substr(first, (last - first + 1)));
}

int main(void)
{
	phonebook pb;
	std::string input;

	input = "";
	std::cout << "Welcome to the phonebook!\n";
	while (input.compare("EXIT") != 0)
	{
		pb.diplay_init();
		std::cin >> input;
		input = ft_clean_spaces_upper(input);
		if (!input.compare("ADD"))
			pb.add();
		else if (!input.compare("SEARCH"))
			pb.list();
		else if (!input.compare("EXIT"))
		{
			pb.exit();
			return (0);
		}
		else
			std::cout << "Invalid command. Try again please\n";
	}
	return (0);
}