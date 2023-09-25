/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:06:40 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:50:09 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &og) : Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = og;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &og)
{
	std::cout << "Cat assignment operator called" << std::endl;
	type = og.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau!" << std::endl;
}