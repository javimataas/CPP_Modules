/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:35:32 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:17:10 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	getLevel(char *argv)
{
	std::string	lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i;
	
	for (i = 0; i < 4; i++)
		if (lvls[i] == argv)
			break;
	return (i);
}

int main(int argc, char *argv[])
{
    Harl	h;
	int		level;

	if (argc != 2)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	else
	{
		level = getLevel(argv[1]);
		switch (level)
		{
			case 0:
				h.complain("DEBUG");
			case 1:
				h.complain("INFO");
			case 2:
				h.complain("WARNING");
			case 3:
				h.complain("ERROR");
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
    return (0);
}