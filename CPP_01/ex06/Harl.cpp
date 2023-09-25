/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:10:13 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:17:14 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my"
	" 7XL-double-cheese-triple-pickle-special-ketchup"
	" burguer. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon"
	" costs more money. You didn't put enough bacon in"
	" my burguer! If you did, I wouldn't be asking for"
	" more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra"
	" bacon for free. I've been coming for years whereas"
	" you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void		(Harl::*levels[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i;

	for (i = 0; i < 4; i++)
	{
		if (lvls[i] == level)
		{
			(this->*levels[i])();
			break ;
		}
	}
	if (i == 4)
		std::cout << "Non declared level: \"" << level << "\"" << std::endl;
}