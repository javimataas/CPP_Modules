/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:53:30 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:43:19 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &og)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = og;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal  &Animal::operator=(const Animal &og)
{
	std::cout << "Animal assignment operator called" << std::endl;
	this->type = og.type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void		Animal::makeSound(void) const
{
	std::cout << "Default Animal sound!" << std::endl;
}