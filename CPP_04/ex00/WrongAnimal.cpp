/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:31:01 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:46:48 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &og)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = og;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &og)
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	this->type = og.type;
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
    return (this->type);
}

void		WrongAnimal::makeSound(void) const
{
	std::cout << "Default WrongAnimal sound!" << std::endl;
}